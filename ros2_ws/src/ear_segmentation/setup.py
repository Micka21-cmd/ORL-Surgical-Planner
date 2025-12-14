from setuptools import setup, find_packages


package_name = 'ear_segmentation'


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
    description='Mock segmentation node',
    license='MIT',
    entry_points={
        'console_scripts': [
                'segment_node = ear_segmentation.segment_node:main',
        ],
    },
)