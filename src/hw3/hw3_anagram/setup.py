from setuptools import find_packages, setup

package_name = 'hw3_anagram'

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
    description='HW3: anagram service server and client',
    license='MIT',
    entry_points={
        'console_scripts': [
            'anagram_server = hw3_anagram.anagram_server:main',
            'anagram_client = hw3_anagram.anagram_client:main',
        ],
    },
)
