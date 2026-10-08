from setuptools import find_packages
from setuptools import setup

setup(
    name='hw4_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('hw4_interfaces', 'hw4_interfaces.*')),
)
