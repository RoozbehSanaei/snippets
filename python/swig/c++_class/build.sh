set -o xtrace
swig -c++ -python -o test_swig_wrap.cxx example.i
g++ -shared  -I /usr/include/python2.7/ -fPIC  example.cxx test_swig_wrap.cxx -o _example.so 
#python _build/python_test_1.py

