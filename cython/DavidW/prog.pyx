# tell Cython about what's in "points.h"
# (this does match the cookbook version)

cdef extern from "points.h":
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