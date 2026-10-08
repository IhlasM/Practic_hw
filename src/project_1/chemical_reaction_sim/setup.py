from setuptools import setup

package_name = 'chemical_reaction_sim'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Student',
    maintainer_email='user@todo.todo',
    description='Chemical reaction simulation package using Turtlesim',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'reaction_node = chemical_reaction_sim.reaction_node:main',
            'action_server = chemical_reaction_sim.turtle_action_server:main',
        ],
    },
)