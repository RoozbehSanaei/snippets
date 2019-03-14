gcc -c -fPIC examples.c
ar rcs libexamples.a examples.o
mkdir lib
cp *.o lib
cp *.a lib
python setup.py build_ext --inplace
