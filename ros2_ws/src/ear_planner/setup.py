from setuptools import setup, find_packages


package_name = 'ear_planner'


setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='you',
    maintainer_email='you@example.com',
    description='A* 3D planner on SDF',
    license='MIT',
    entry_points={
        'console_scripts': [
            'planner_action_server = ear_planner.planner_action_server:main',
            'csv_path_publisher = ear_planner.csv_path_publisher:main',
        ],
    },

)