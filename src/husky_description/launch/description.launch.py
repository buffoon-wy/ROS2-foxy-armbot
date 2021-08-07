import os

from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
from launch import LaunchDescription
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

import xacro


def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    # xacro_path = os.path.join(
    #     get_package_share_directory('husky_description'),
    #     'urdf',
    #     "husky.urdf.xacro")
    xacro_path = "/home/kyxz/dev_ws/src/husky_description/urdf/husky.urdf.xacro"

    return LaunchDescription([


        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description':Command(['xacro',' ', xacro_path])
            }]),
    ])


