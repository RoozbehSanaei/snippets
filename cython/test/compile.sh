python setup.py build_ext --inplace
ipython test.py
rm *.so
rm *.pyd
rm -r build
rm multiply.c