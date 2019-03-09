# point.pyx
cdef extern from "pointc.c":
    ctypedef struct Point:
        int x
        int y
    Point make_and_send_point(int x, int y)

cdef class PyPoint:
    cdef Point p

    def __init__(self, x, y):
        self.p = make_and_send_point(x, y)

    @property
    def x(self):
       return self.p.x

    @property
    def y(self):
        return self.p.y