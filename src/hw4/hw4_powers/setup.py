from setuptools import find_packages, setup

package_name = 'hw4_powers'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Matniyazov Ikhlasbek',
    maintainer_email='student@example.com',
    description='HW4: action server and client for powers of two',
    license='MIT',
    entry_points={
        'console_scripts': [
            'power_server = hw4_powers.power_server:main',
            'power_client = hw4_powers.power_client:main',
        ],
    },
)
