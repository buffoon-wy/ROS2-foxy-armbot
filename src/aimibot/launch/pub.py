
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():



    return LaunchDescription([



        Node(
            package='cat',
            node_executable='talker',
            #node_name='aimibotV3'
			output='screen',
			),


    ])

