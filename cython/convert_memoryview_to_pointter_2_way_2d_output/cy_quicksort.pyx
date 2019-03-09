import numpy as np

cdef extern from "quicksort.h":
    int* quick_sort (int* a, int n)

def quicksort_c(int[:] a):
    b = quick_sort(&a[0], a.size)
    cdef int[:,:] result = <int[:3,:3]> b
    return np.asarray(result)