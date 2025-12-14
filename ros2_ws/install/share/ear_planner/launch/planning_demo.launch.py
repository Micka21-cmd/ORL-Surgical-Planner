from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    sdf_path = LaunchConfiguration('sdf_path')
    mask_path = LaunchConfiguration('mask_path')

    return LaunchDescription([
        DeclareLaunchArgument('sdf_path', default_value=''),
        DeclareLaunchArgument('mask_path', default_value=''),

        Node(
            package='ear_segmentation',
            executable='segment_node.py',
            name='segment_node'
        ),

        Node(
            package='ear_centerline',
            executable='centerline_node.py',
            name='centerline_node'
        ),

        Node(
            package='ear_planner',
            executable='planner_action_server.py',
            name='planner',
            parameters=[{'sdf_path': sdf_path, 'mask_path': mask_path}]
        ),
    ])
