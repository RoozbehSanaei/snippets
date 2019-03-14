#!/usr/bin/env python

from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

import numpy

setup(
    cmdclass = {'build_ext': build_ext},
    ext_modules = [Extension("cy_quicksort",
                             sources=["cy_quicksort.pyx", "cy_quicksort.c"],
                             include_dirs=[numpy.get_include()])],
)