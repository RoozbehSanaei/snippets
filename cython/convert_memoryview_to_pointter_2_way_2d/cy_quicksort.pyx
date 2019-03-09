import numpy as np

cdef extern from "quicksort.h":
    float* quick_sort (float* a, int n)

def quicksort_c(float[:,:] a):
    b = quick_sort(&a[0,0], a.size)
    cdef float[:,:] result = <float[:3,:3]> b
    return np.asarray(result)