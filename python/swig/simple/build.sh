#install swig if it is not installed
#sudo apt-get install swig

clear
swig -python example.i
gcc -fpic -c example.c example_wrap.c -I/usr/include/python2.7
gcc -shared example.o example_wrap.o -o _example.so
python example_test.py
#desert ld -shared example.o example_wrap.o -o _example.so
