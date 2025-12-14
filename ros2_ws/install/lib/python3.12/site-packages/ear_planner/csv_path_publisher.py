import csv, rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped

class CsvPathPub(Node):
    def __init__(self):
        super().__init__('csv_path_pub')
        self.csv_path = self.declare_parameter('csv', '').value
        if not self.csv_path:
            self.get_logger().error("Paramètre -p csv:=/chemin/vers/xxx.csv manquant")
            raise SystemExit(1)
        self.pub = self.create_publisher(Path, 'planned_path', 1)

        path = Path(); path.header.frame_id = 'mri'
        with open(self.csv_path, newline='') as f:
            r = csv.DictReader(f)
            for row in r:
                ps = PoseStamped(); ps.header.frame_id='mri'
                ps.pose.position.x = x_mm * 0.001
                ps.pose.position.y = y_mm * 0.001
                ps.pose.position.z = z_mm * 0.001
                path.poses.append(ps)

        self.path = path
        self.get_logger().info(f'Published {len(path.poses)} poses from {self.csv_path}')
        self.pub.publish(self.path)
        self.timer = self.create_timer(2.0, self._republish)

    def _republish(self):
        self.pub.publish(self.path)

def main():
    rclpy.init()
    n = CsvPathPub()
    rclpy.spin(n)
    n.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
