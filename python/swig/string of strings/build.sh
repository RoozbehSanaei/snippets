clear
set -o xtrace
swig -c++ -python -o test_wrap.cpp test.i
g++ -shared  -I /usr/include/python3.5/ -fPIC  test_wrap.cpp -o _test.so 
python test.py
rm _example.so example.py example.pyc example_wrap.cpp
