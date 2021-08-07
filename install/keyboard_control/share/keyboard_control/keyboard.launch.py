from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription([

        Node(
            package='keyboard_control',
            executable='key_publisher',
		output='screen',
		name='key_publisher',
			),
    ])

