from setuptools import find_packages
from setuptools import setup

setup(
    name='reaction_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('reaction_interfaces', 'reaction_interfaces.*')),
)
