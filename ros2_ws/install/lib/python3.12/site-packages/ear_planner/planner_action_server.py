#!/usr/bin/env python3
import os
import heapq
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import nibabel as nib
import numpy as np
from ear_msgs.action import PlanPath
from geometry_msgs.msg import PoseStamped
from nav_msgs.msg import Path

MOVES = [
    (1,0,0),(-1,0,0),(0,1,0),(0,-1,0),(0,0,1),(0,0,-1),
    (1,1,0),(1,-1,0),(-1,1,0),(-1,-1,0),
    (1,0,1),(1,0,-1),(-1,0,1),(-1,0,-1),
    (0,1,1),(0,1,-1),(0,-1,1),(0,-1,-1),
]

class PlannerNode(Node):
    def __init__(self):
        super().__init__('planner_action_server')
        # Déclarer une fois
        self.declare_parameter('sdf_path', '')
        self.declare_parameter('mask_path', '')

        # Publisher RViz
        self.pub_path = self.create_publisher(Path, 'planned_path', 10)

        # Action server
        self.act = ActionServer(self, PlanPath, 'plan_path', self.execute_cb)
        self.get_logger().info('plan_path action ready (params: sdf_path, mask_path)')

    def _expand_param(self, name: str) -> str:
        v = self.get_parameter(name).get_parameter_value().string_value
        return os.path.abspath(os.path.expandvars(os.path.expanduser(v))) if v else ''

    def execute_cb(self, goal_handle):
        t0 = time.time()

        # ⚠️ Re-lecture/expansion des paramètres à chaque goal
        sdf_path  = self._expand_param('sdf_path')
        mask_path = self._expand_param('mask_path')

        assert os.path.exists(sdf_path),  f"SDF not found: {sdf_path}"
        assert os.path.exists(mask_path), f"Mask not found: {mask_path}"

        # Récupérer la requête
        goal = goal_handle.request  # <<< FIX

        # Charger SDF
        sdf_img = nib.load(sdf_path)
        sdf = sdf_img.get_fdata().astype(np.float32)
        affine = sdf_img.affine
        # tailles de voxel (mm) ~ diag(A) (supposé sans cisaillement fort)
        spacings = np.sqrt((affine[:3, :3] ** 2).sum(axis=0))

        # Clearance demandée
        req_clearance = 0.5 * goal.tool_diam_mm + goal.safety_margin_mm

        # Monde -> indices voxel (z,y,x)
        def world_to_ijk(p):
            xyz1 = np.array([p.x, p.y, p.z, 1.0])
            ijk = np.linalg.inv(affine) @ xyz1
            return np.round(ijk[:3]).astype(int)[::-1]

        e = tuple(world_to_ijk(goal.entry.pose.position))
        t = tuple(world_to_ijk(goal.target.pose.position))
        Z, Y, X = sdf.shape

        def inb(p):
            z, y, x = p
            return 0 <= z < Z and 0 <= y < Y and 0 <= x < X

        # Voxels admissibles
        feas = sdf >= req_clearance
        if not (inb(e) and inb(t) and feas[e] and feas[t]):
            goal_handle.abort()
            res = PlanPath.Result()
            res.path = Path()
            res.min_clearance_mm = 0.0
            res.est_time_s = float(time.time() - t0)
            self.get_logger().warn('Entry/Target invalid or not feasible with requested clearance')
            return res

        # Heuristique A* (euclidienne pondérée par spacings)
        def h(p):
            return np.linalg.norm((np.array(p) - np.array(t)) * spacings[::-1])

        # A* -------------------------------------------------------------------
        openq = []                                  # <<< FIX
        g = {e: 0.0}
        parent = {e: None}
        heapq.heappush(openq, (h(e), e))
        it = 0

        while openq:
            f, u = heapq.heappop(openq)
            if u == t:
                break
            if it % 5000 == 0:
                fb = PlanPath.Feedback()
                fb.progress = float(min(99.0, 100.0 * len(g) / (X * Y * Z)))
                goal_handle.publish_feedback(fb)
            it += 1

            uz, uy, ux = u
            for dz, dy, dx in MOVES:
                v = (uz + dz, uy + dy, ux + dx)
                if not inb(v) or not feas[v]:
                    continue
                # coût = longueur de pas * pénalité inverse de la marge
                step = np.linalg.norm(np.array([dx, dy, dz]) * spacings[::-1])
                clr = max(1e-3, float(sdf[v]))
                w = step * (1.0 + (req_clearance / clr))
                ng = g[u] + w
                if v not in g or ng < g[v]:
                    g[v] = ng
                    parent[v] = u
                    heapq.heappush(openq, (ng + h(v), v))

        if t not in parent:
            goal_handle.abort()
            res = PlanPath.Result()
            res.path = Path()
            res.min_clearance_mm = 0.0
            res.est_time_s = float(time.time() - t0)
            self.get_logger().warn('No path found with requested clearance')
            return res

        # Reconstruction -------------------------------------------------------
        path_vox = []
        cur = t
        min_clr = float('inf')
        while cur is not None:
            path_vox.append(cur)
            min_clr = min(min_clr, float(sdf[cur]))
            cur = parent[cur]
        path_vox.reverse()

        # L.O.S. basique (Bresenham naïf)
        def line_of_sight(a, b):
            a = np.array(a); b = np.array(b)
            n = int(np.linalg.norm((a - b), ord=np.inf))
            if n == 0:
                return True                       # <<< FIX
            for i in range(1, n):
                p = np.round(a + (b - a) * (i / n)).astype(int)
                if not feas[tuple(p)]:            # <<< FIX (tester CHAQUE point)
                    return False
            return True

        # Lissage par raccourcis
        smoothed = []
        i = 0
        while i < len(path_vox):
            j = len(path_vox) - 1
            while j > i and not line_of_sight(path_vox[i], path_vox[j]):
                j -= 1
            smoothed.append(path_vox[i])
            i = j
        if smoothed[-1] != path_vox[-1]:
            smoothed.append(path_vox[-1])

        # Message Path ---------------------------------------------------------
        path_msg = Path()
        path_msg.header.frame_id = 'mri'
        for z, y, x in smoothed:
            ijk1 = np.array([x, y, z, 1.0])
            xyz = (affine @ ijk1)[:3]
            ps = PoseStamped()
            ps.header.frame_id = 'mri'
            ps.pose.position.x = float(xyz[0])
            ps.pose.position.y = float(xyz[1])
            ps.pose.position.z = float(xyz[2])
            ps.pose.orientation.w = 1.0
            path_msg.poses.append(ps)

        res = PlanPath.Result()
        res.path = path_msg
        res.min_clearance_mm = float(min_clr)
        res.est_time_s = float(time.time() - t0)

        self.pub_path.publish(path_msg)
        goal_handle.succeed()
        self.get_logger().info(f'Path poses: {len(smoothed)}, min_clearance: {min_clr:.2f} mm')
        return res

def main():
    rclpy.init()
    node = PlannerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
