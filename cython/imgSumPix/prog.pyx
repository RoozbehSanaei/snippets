# tell Cython about what's in "points.h"
# (this does match the cookbook version)

cdef extern from "points.h":
    float* quick_sort1 (RAPSODO_IMAGE_TYPE *p, int n)
    float imgSumPix (RAPSODO_IMAGE_TYPE *p)

    ctypedef struct RAPSODO_IMAGE_TYPE:
        unsigned int width;
        unsigned int height;
        unsigned int widthCropped;
        unsigned int heightCropped;
        unsigned int startX;
        unsigned int startY;
        unsigned int endX;
        unsigned int endY;
        float *image;
        unsigned short timeStamp;

# Then we describe a class that has a Point member "pt"
cdef class Py_Point:
    cdef RAPSODO_IMAGE_TYPE pt

    def __init__(self,x):
        self.pt.timeStamp = x

    # define properties in the normal Python way
    @property
    def timeStamp(self):
        return self.pt.timeStamp

    @timeStamp.setter
    def timeStamp(self,val):
        self.pt.timeStamp = val

import numpy as np

def quicksort_c(float[:,:] a):
    cdef RAPSODO_IMAGE_TYPE p
    p.image = &a[0,0]
    p.width = 300
    p.height = 300
    b = quick_sort1(&p, a.size)
    cdef float[:,:] result = <float[:300,:300]> b
    return np.asarray(result)


def img_sum_pix(float[:,:] a):
    cdef RAPSODO_IMAGE_TYPE p
    p.width = 300
    p.height = 300
    p.image = &a[0,0]
    b = imgSumPix(&p)
    return b