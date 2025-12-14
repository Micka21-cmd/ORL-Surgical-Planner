from setuptools import find_packages
from setuptools import setup

setup(
    name='ear_segmentation',
    version='0.0.1',
    packages=find_packages(
        include=('ear_segmentation', 'ear_segmentation.*')),
)
