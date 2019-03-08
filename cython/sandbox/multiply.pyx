"""
multiply.pyx

simple cython test of accessing a numpy array's data

the C function: c_multiply multiplies all the values in a 2-d array by a scalar, in place.

"""

import cython
# import both numpy and the Cython declarations for numpy
import numpy as np
cimport numpy as np


# declare the interface to the C code
cdef extern void c_multiply (double* array1, double* array2, int m, int n)

@cython.boundscheck(False)
@cython.wraparound(False)
def multiply(np.ndarray[double, ndim=2, mode="c"] input1 not None, np.ndarray[double, ndim=2, mode="c"] input2 not None):
    """
    multiply (arr, value)

    Takes a numpy arry as input, and multiplies each element by value, in place

    param: array -- a 2-d numpy array of np.float64
    param: value -- a number that will be multiplied by each element in the array

    """
    cdef int m, n

    m, n = input1.shape[0], input1.shape[1]
    c_multiply (&input1[0,0], &input2[0,0], m, n)

    return None



ctypedef struct Point:
    double x
    double y


# Then we describe a class that has a Point member "pt"
cdef class Py_Point:
    cdef Point pt

    def __init__(self,x,y):
        self.pt.x = x
        self.pt.y = y

    # define properties in the normal Python way
    @property
    def x(self):
        return self.pt.x

    @x.setter
    def x(self,val):
        self.pt.x = val

    @property
    def y(self):
        return self.pt.y

    @y.setter
    def y(self,val):
        self.pt.y = val