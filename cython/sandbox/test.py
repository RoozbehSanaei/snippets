#!/usr/bin/env python

"""
simple test of the multiply.pyx and c_multiply.c test code
"""

import numpy as np

from multiply import *

a = np.arange(12, dtype=np.float64).reshape((3,4))
b = np.arange(12, dtype=np.float64).reshape((3,4))

print(a)
print(b)

multiply(a, b)

print(a)


# create a couple of points
pt1 = Py_Point(1.3,4.5)
pt2 = Py_Point(1.5,0)

print(pt1.x, pt1.y) # access the members

