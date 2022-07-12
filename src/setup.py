#!/usr/bin/env python3

import setuptools
import glob

desc = """
My wonderful Python extension package
=====================================

This is an example Python extension package written in C++ using the Boost Python library.
"""

core = setuptools.Extension(
    "my_package._core",
    sources=glob.glob("my_package.core/*.cpp"),
    libraries=["boost_python310"],
)

setuptools.setup(
    name="my_package",
    version="1.0",
    description="My wonderful Python extension package",
    packages=["my_package"],
    ext_modules=[core],
    long_description=desc,
)
