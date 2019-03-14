clear
set -o xtrace
swig -c++ -python -o example_wrap.cpp example.i
g++ -shared  -I /usr/include/python3.5/ -fPIC  example.cpp example_wrap.cpp -o _example.so 
python test.py
rm _example.so example.py example.pyc example_wrap.cpp
