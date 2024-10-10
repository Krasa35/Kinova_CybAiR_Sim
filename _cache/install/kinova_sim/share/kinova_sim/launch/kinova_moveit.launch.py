from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(get_package_share_directory('kinova_gen3_7dof_robotiq_2f_85_moveit_config') + '/launch/robot.launch.py'),
            launch_arguments=[('robot_ip', 'yyy.yyy.yyy.yyy'), ('use_fake_hardware', 'true')],
        ),
    ])