#cython: language_level=3

cdef extern from "pointc.c":

    int multiply(int x, int y)

def multiply_p(x,y):
    z = multiply(x,y)
    return z