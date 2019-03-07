python setup.py build_ext --inplace
ipython test.py
del *.so
del *.pyd
del -r build
del multiply.c