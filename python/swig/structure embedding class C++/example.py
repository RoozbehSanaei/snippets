# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.8
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_example', [dirname(__file__)])
        except ImportError:
            import _example
            return _example
        if fp is not None:
            try:
                _mod = imp.load_module('_example', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _example = swig_import_helper()
    del swig_import_helper
else:
    import _example
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0


class simple_struct_t(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, simple_struct_t, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, simple_struct_t, name)
    __repr__ = _swig_repr
    __swig_setmethods__["int_var"] = _example.simple_struct_t_int_var_set
    __swig_getmethods__["int_var"] = _example.simple_struct_t_int_var_get
    if _newclass:
        int_var = _swig_property(_example.simple_struct_t_int_var_get, _example.simple_struct_t_int_var_set)
    __swig_setmethods__["long_var"] = _example.simple_struct_t_long_var_set
    __swig_getmethods__["long_var"] = _example.simple_struct_t_long_var_get
    if _newclass:
        long_var = _swig_property(_example.simple_struct_t_long_var_get, _example.simple_struct_t_long_var_set)
    __swig_setmethods__["float_var"] = _example.simple_struct_t_float_var_set
    __swig_getmethods__["float_var"] = _example.simple_struct_t_float_var_get
    if _newclass:
        float_var = _swig_property(_example.simple_struct_t_float_var_get, _example.simple_struct_t_float_var_set)

    def __init__(self):
        this = _example.new_simple_struct_t()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _example.delete_simple_struct_t
    __del__ = lambda self: None
simple_struct_t_swigregister = _example.simple_struct_t_swigregister
simple_struct_t_swigregister(simple_struct_t)

class tlv_base_t(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, tlv_base_t, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, tlv_base_t, name)
    __repr__ = _swig_repr
    __swig_setmethods__["type"] = _example.tlv_base_t_type_set
    __swig_getmethods__["type"] = _example.tlv_base_t_type_get
    if _newclass:
        type = _swig_property(_example.tlv_base_t_type_get, _example.tlv_base_t_type_set)
    __swig_setmethods__["length"] = _example.tlv_base_t_length_set
    __swig_getmethods__["length"] = _example.tlv_base_t_length_get
    if _newclass:
        length = _swig_property(_example.tlv_base_t_length_get, _example.tlv_base_t_length_set)
    __swig_getmethods__["value"] = _example.tlv_base_t_value_get
    if _newclass:
        value = _swig_property(_example.tlv_base_t_value_get)

    def __init__(self):
        this = _example.new_tlv_base_t()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _example.delete_tlv_base_t
    __del__ = lambda self: None
tlv_base_t_swigregister = _example.tlv_base_t_swigregister
tlv_base_t_swigregister(tlv_base_t)

class tlv_type1_t(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, tlv_type1_t, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, tlv_type1_t, name)
    __repr__ = _swig_repr
    __swig_setmethods__["base"] = _example.tlv_type1_t_base_set
    __swig_getmethods__["base"] = _example.tlv_type1_t_base_get
    if _newclass:
        base = _swig_property(_example.tlv_type1_t_base_get, _example.tlv_type1_t_base_set)
    __swig_setmethods__["stat"] = _example.tlv_type1_t_stat_set
    __swig_getmethods__["stat"] = _example.tlv_type1_t_stat_get
    if _newclass:
        stat = _swig_property(_example.tlv_type1_t_stat_get, _example.tlv_type1_t_stat_set)
    __swig_setmethods__["info"] = _example.tlv_type1_t_info_set
    __swig_getmethods__["info"] = _example.tlv_type1_t_info_get
    if _newclass:
        info = _swig_property(_example.tlv_type1_t_info_get, _example.tlv_type1_t_info_set)
    __swig_setmethods__["something"] = _example.tlv_type1_t_something_set
    __swig_getmethods__["something"] = _example.tlv_type1_t_something_get
    if _newclass:
        something = _swig_property(_example.tlv_type1_t_something_get, _example.tlv_type1_t_something_set)

    def __init__(self):
        this = _example.new_tlv_type1_t()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _example.delete_tlv_type1_t
    __del__ = lambda self: None
tlv_type1_t_swigregister = _example.tlv_type1_t_swigregister
tlv_type1_t_swigregister(tlv_type1_t)

class complex_struct_t(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, complex_struct_t, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, complex_struct_t, name)
    __repr__ = _swig_repr
    __swig_setmethods__["string"] = _example.complex_struct_t_string_set
    __swig_getmethods__["string"] = _example.complex_struct_t_string_get
    if _newclass:
        string = _swig_property(_example.complex_struct_t_string_get, _example.complex_struct_t_string_set)
    __swig_setmethods__["ints"] = _example.complex_struct_t_ints_set
    __swig_getmethods__["ints"] = _example.complex_struct_t_ints_get
    if _newclass:
        ints = _swig_property(_example.complex_struct_t_ints_get, _example.complex_struct_t_ints_set)
    __swig_setmethods__["embedded"] = _example.complex_struct_t_embedded_set
    __swig_getmethods__["embedded"] = _example.complex_struct_t_embedded_get
    if _newclass:
        embedded = _swig_property(_example.complex_struct_t_embedded_get, _example.complex_struct_t_embedded_set)
    __swig_setmethods__["pointer_array_count"] = _example.complex_struct_t_pointer_array_count_set
    __swig_getmethods__["pointer_array_count"] = _example.complex_struct_t_pointer_array_count_get
    if _newclass:
        pointer_array_count = _swig_property(_example.complex_struct_t_pointer_array_count_get, _example.complex_struct_t_pointer_array_count_set)
    __swig_setmethods__["pointer_array"] = _example.complex_struct_t_pointer_array_set
    __swig_getmethods__["pointer_array"] = _example.complex_struct_t_pointer_array_get
    if _newclass:
        pointer_array = _swig_property(_example.complex_struct_t_pointer_array_get, _example.complex_struct_t_pointer_array_set)
    __swig_setmethods__["tlv"] = _example.complex_struct_t_tlv_set
    __swig_getmethods__["tlv"] = _example.complex_struct_t_tlv_get
    if _newclass:
        tlv = _swig_property(_example.complex_struct_t_tlv_get, _example.complex_struct_t_tlv_set)

    def __init__(self):
        this = _example.new_complex_struct_t()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _example.delete_complex_struct_t
    __del__ = lambda self: None
complex_struct_t_swigregister = _example.complex_struct_t_swigregister
complex_struct_t_swigregister(complex_struct_t)

class Shape(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Shape, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Shape, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _example.delete_Shape
    __del__ = lambda self: None
    __swig_setmethods__["x"] = _example.Shape_x_set
    __swig_getmethods__["x"] = _example.Shape_x_get
    if _newclass:
        x = _swig_property(_example.Shape_x_get, _example.Shape_x_set)
    __swig_setmethods__["y"] = _example.Shape_y_set
    __swig_getmethods__["y"] = _example.Shape_y_get
    if _newclass:
        y = _swig_property(_example.Shape_y_get, _example.Shape_y_set)
    __swig_setmethods__["embedded"] = _example.Shape_embedded_set
    __swig_getmethods__["embedded"] = _example.Shape_embedded_get
    if _newclass:
        embedded = _swig_property(_example.Shape_embedded_get, _example.Shape_embedded_set)
    __swig_setmethods__["complex_embedded"] = _example.Shape_complex_embedded_set
    __swig_getmethods__["complex_embedded"] = _example.Shape_complex_embedded_get
    if _newclass:
        complex_embedded = _swig_property(_example.Shape_complex_embedded_get, _example.Shape_complex_embedded_set)

    def move(self, dx, dy):
        return _example.Shape_move(self, dx, dy)

    def area(self):
        return _example.Shape_area(self)

    def perimeter(self):
        return _example.Shape_perimeter(self)
    __swig_setmethods__["nshapes"] = _example.Shape_nshapes_set
    __swig_getmethods__["nshapes"] = _example.Shape_nshapes_get
    if _newclass:
        nshapes = _swig_property(_example.Shape_nshapes_get, _example.Shape_nshapes_set)
Shape_swigregister = _example.Shape_swigregister
Shape_swigregister(Shape)
cvar = _example.cvar

class Circle(Shape):
    __swig_setmethods__ = {}
    for _s in [Shape]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Circle, name, value)
    __swig_getmethods__ = {}
    for _s in [Shape]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, Circle, name)
    __repr__ = _swig_repr

    def __init__(self, r):
        this = _example.new_Circle(r)
        try:
            self.this.append(this)
        except Exception:
            self.this = this

    def area(self):
        return _example.Circle_area(self)

    def perimeter(self):
        return _example.Circle_perimeter(self)
    __swig_destroy__ = _example.delete_Circle
    __del__ = lambda self: None
Circle_swigregister = _example.Circle_swigregister
Circle_swigregister(Circle)

class Square(Shape):
    __swig_setmethods__ = {}
    for _s in [Shape]:
        __swig_setmethods__.update(getattr(_s, '__swig_setmethods__', {}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Square, name, value)
    __swig_getmethods__ = {}
    for _s in [Shape]:
        __swig_getmethods__.update(getattr(_s, '__swig_getmethods__', {}))
    __getattr__ = lambda self, name: _swig_getattr(self, Square, name)
    __repr__ = _swig_repr

    def __init__(self, w):
        this = _example.new_Square(w)
        try:
            self.this.append(this)
        except Exception:
            self.this = this

    def area(self):
        return _example.Square_area(self)

    def perimeter(self):
        return _example.Square_perimeter(self)

    def make_array(self):
        return _example.Square_make_array(self)
    __swig_destroy__ = _example.delete_Square
    __del__ = lambda self: None
Square_swigregister = _example.Square_swigregister
Square_swigregister(Square)

# This file is compatible with both classic and new-style classes.


