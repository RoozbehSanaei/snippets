#install swig if it is not installed
#sudo apt-get install swig
rm *_wrap*
rm *.so
rm *.o
rm example.py
swig -python example.i
gcc -fpic -c -g example.c example_wrap.c -I/usr/include/python3.5
gcc -shared  -g example.o example_wrap.o -o _example.so
python test.py