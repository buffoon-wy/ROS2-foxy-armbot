
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='True')
    
    publish_frequency = LaunchConfiguration('publish_frequency', default='20.0')
    urdf_file_name = 'aimibot.urdf'

    print("urdf_file_name : {}".format(urdf_file_name))

    urdf = os.path.join(
        get_package_share_directory('description'),
        'urdf',
        urdf_file_name)
    rviz_config_dir = os.path.join(
        get_package_share_directory('description'),
        'rviz',
        'model.rviz')

    return LaunchDescription([

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            parameters=[{'use_sim_time': use_sim_time,
                          'publish_frequency': 10.0}],
            arguments=[urdf]),

        Node(
            package='aimibot',
            executable='aimibot',
            remappings=[ ('/aimibot/commands/velocity', '/cmd_vel'),],
            #node_name='aimibotV3'
			output='screen',
			),


    ])

