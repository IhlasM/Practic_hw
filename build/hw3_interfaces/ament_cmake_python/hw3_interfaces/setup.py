from setuptools import find_packages
from setuptools import setup

setup(
    name='hw3_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('hw3_interfaces', 'hw3_interfaces.*')),
)
