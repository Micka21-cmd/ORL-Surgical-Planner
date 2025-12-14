#!/usr/bin/env python3
import os
import rclpy
from rclpy.node import Node
from ear_msgs.srv import Centerline
from geometry_msgs.msg import PoseArray, Pose
import nibabel as nib
import numpy as np
from scipy.ndimage import distance_transform_edt
from skimage.morphology import skeletonize_3d
from visualization_msgs.msg import Marker, MarkerArray

class CenterlineNode(Node):
    def __init__(self):
        super().__init__('centerline_node')
        self.srv = self.create_service(Centerline, 'compute_centerline', self.cb)
        self.get_logger().info('compute_centerline service ready')
        self.pub_mk = self.create_publisher(MarkerArray, 'centerline_markers', 10)


    def cb(self, req: Centerline.Request, resp: Centerline.Response):
        mask_path = req.mask_path
        assert os.path.exists(mask_path), f"Mask not found: {mask_path}"
        img = nib.load(mask_path)
        mask = (img.get_fdata() > 0.5).astype(np.uint8)
        # Skeleton (centerline candidates)
        skel = skeletonize_3d(mask)
        # Distance field in millimeters (use voxel spacing from affine)
        # voxel spacing from affine diagonal
        affine = img.affine
        spacings = np.sqrt((affine[:3, :3] ** 2).sum(axis=0))
        sdf = distance_transform_edt(mask == 1, sampling=spacings)
        # Save SDF NIfTI (float32)
        out_dir = os.path.join(os.path.dirname(mask_path), '..', 'mri_processed')
        os.makedirs(out_dir, exist_ok=True)
        sdf_path = os.path.abspath(os.path.join(out_dir, 'sdf_mm.nii.gz'))
        nib.save(nib.Nifti1Image(sdf.astype(np.float32), affine), sdf_path)
        # Build PoseArray from skeleton voxels (downsampled for compactness)
        coords = np.column_stack(np.nonzero(skel)) # (N, 3) index coords (z,y,x)
        if coords.shape[0] == 0:
            self.get_logger().warn('Skeleton empty; returning empty centerline')
        # stride to reduce points
        coords = coords[:: max(1, coords.shape[0] // 512 + 1)]
        # Convert index -> world using affine
        ones = np.ones((coords.shape[0], 1))
        ijk1 = np.concatenate([coords[:, ::-1], ones], axis=1) # to (x,y,z,1)
        xyz = (affine @ ijk1.T).T[:, :3]
        pa = PoseArray()
        mk = Marker()
        mk.header.frame_id = 'mri'; mk.type = Marker.LINE_STRIP; mk.action = Marker.ADD
        mk.scale.x = 0.5  # diamètre visuel (mm)
        mk.id = 0
        for p in pa.poses:
            mk.points.append(type(mk.points[0])(x=p.position.x, y=p.position.y, z=p.position.z))
        ma = MarkerArray(); ma.markers.append(mk)
        self.pub_mk.publish(ma)
        pa.header.frame_id = 'mri'
        for p in xyz:
            pose = Pose()
            pose.position.x, pose.position.y, pose.position.z = float(p[0]), float(p[1]), float(p[2])
            # orientation left as identity (unused here)
            pa.poses.append(pose)
        resp.centerline = pa
        resp.sdf_path = sdf_path
        self.get_logger().info(f'Saved SDF to {sdf_path} with {len(pa.poses)} centerline points')
        return resp


def main():
    rclpy.init()
    node = CenterlineNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()