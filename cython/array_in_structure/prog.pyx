# tell Cython about what's in "points.h"
# (this does match the cookbook version)

cdef extern from "points.h":
    ctypedef struct Point:
        float multiply
        float* arr
    float* quick_sort (Point p, int n)

# Then we describe a class that has a Point member "pt"
cdef class Py_Point:
    cdef Point pt

    def __init__(self,x):
        self.pt.multiply = x

    # define properties in the normal Python way
    @property
    def multiply(self):
        return self.pt.multiply

    @multiply.setter
    def multiply(self,val):
        self.pt.multiply = val

import numpy as np

    
def quicksort_c(float[:,:] a):
    cdef Point p
    p.arr = &a[0,0]
    b = quick_sort(p, a.size)
    cdef float[:,:] result = <float[:300,:300]> b
    return np.asarray(result)