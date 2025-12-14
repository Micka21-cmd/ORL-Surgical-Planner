from setuptools import find_packages
from setuptools import setup

setup(
    name='ear_planner',
    version='0.0.1',
    packages=find_packages(
        include=('ear_planner', 'ear_planner.*')),
)
