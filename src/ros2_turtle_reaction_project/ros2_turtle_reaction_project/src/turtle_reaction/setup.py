from setuptools import setup

package_name = 'turtle_reaction'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/reaction.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    description='Turtlesim chemical reaction simulation',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'reaction_node = turtle_reaction.reaction_node:main',
        ],
    },
)
