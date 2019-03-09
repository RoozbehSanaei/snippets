cdef extern from "my_c_file.c":
    ctypedef struct _my_struct_value:
        unsigned int x
        unsigned int y

    cdef struct _my_struct_t:
        unsigned int a
        _my_struct_value value