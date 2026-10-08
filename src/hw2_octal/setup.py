from setuptools import find_packages, setup

package_name = 'hw2_octal'

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
    description='HW2: numbers to octal',
    license='MIT',
    entry_points={
        'console_scripts': [
            'number_publisher = hw2_octal.number_publisher:main',
            'octal_converter = hw2_octal.octal_converter:main',
        ],
    },
)
