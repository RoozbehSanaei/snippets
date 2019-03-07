rm *.so
set -o xtrace
swig -c++ -python -o example_wrap.cpp example.i
g++ -shared  -I /usr/include/python3.5/ -fPIC  example.cxx example_wrap.cpp -o _example.so 
python test.py
