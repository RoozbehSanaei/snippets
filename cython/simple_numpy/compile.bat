python setup.py build_ext --inplace
ipython test.py

#remove generated files
del *.so
del *.pyd
del -r build
del multiply.c