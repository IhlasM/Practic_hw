from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(package='turtlesim', executable='turtlesim_node'),
        Node(package='chem_reaction', executable='turtle_setup'),
        Node(package='chem_reaction', executable='turtle_motion'),
        Node(package='chem_reaction', executable='collision_detector'),
        Node(package='chem_reaction', executable='reaction_manager'),
    ])
