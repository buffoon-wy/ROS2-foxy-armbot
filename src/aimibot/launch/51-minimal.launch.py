#!/usr/bin/env python3
import os

from ament_index_python.packages import get_package_share_directory
import launch_ros.actions
from launch.substitutions import LaunchConfiguration
from launch import LaunchDescription




def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    urdf_file_name = 'husky.urdf'
    urdf_file = os.path.join(
        get_package_share_directory('armbot_description'),
        'urdf',
        urdf_file_name)
        
    rviz2_config_flie= os.path.join(
        get_package_share_directory('armbot_description'),
        'config',
        'armbot_rviz2_config.rviz')

    armbot_dsp = launch_ros.actions.Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{
                         'use_sim_time': use_sim_time,
                         'publish_frequency': 10.0
                        }],
                        arguments=[urdf_file],
        )

    armbot_joint = launch_ros.actions.Node(
            name='joint_state_publisher',
            package='joint_state_publisher',
            executable='joint_state_publisher',
            output='screen',
        )

    armbot_rviz2 = launch_ros.actions.Node(
            name='rviz',
            package='rviz2',
            executable='rviz2',
            output='screen',
            arguments=['-d', rviz2_config_flie]
        )

    armbot_chassis = launch_ros.actions.Node(
            name='aimibot',
            package='aimibot',
            executable='aimibot',
            remappings=[ ('/aimibot/commands/velocity', '/cmd_vel'),],  
			output='screen',
    )

    return LaunchDescription([
        armbot_dsp,
        armbot_joint,
        #armbot_rviz2,
        armbot_chassis,
    ])

