rm -r lib
rm -r build_ext
rm *.o
rm *.a
rm *.so
gcc -c -ggdb -fPIC examples.c
ar rcs libexamples.a examples.o
mkdir lib
cp *.o lib
cp *.a lib
python3-dbg setup.py build_ext --inplace

cython --embed -o hello_world.c hello_world.py

gcc -c -I/usr/include/python3.5dm -o ctest.o ctest.c
gcc -shared -L/usr/lib/python3.5 -o ctest.pyd ctest.o -lpython27
