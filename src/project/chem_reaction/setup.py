import os
from glob import glob

from setuptools import find_packages, setup

package_name = 'chem_reaction'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Matniyazov Ikhlasbek',
    maintainer_email='student@example.com',
    description='Project 6: chemical reaction of turtles in turtlesim',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle_setup = chem_reaction.turtle_setup:main',
            'turtle_motion = chem_reaction.turtle_motion:main',
            'collision_detector = chem_reaction.collision_detector:main',
            'reaction_manager = chem_reaction.reaction_manager:main',
        ],
    },
)
