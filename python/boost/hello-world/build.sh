clear
set -o xtrace
g++  -I/usr/include/python2.7 -fpic  hello.cpp -shared -lboost_python -o hello.so
python test_hello.py
rm hello.so 
