swig3.0 -c++ -python example.i
g++ -fpic -c example.h example_wrap.cxx word.cpp -I/usr/include/python3.5/
gcc -shared example_wrap.o Word.o -o _example.so -lstdc++
