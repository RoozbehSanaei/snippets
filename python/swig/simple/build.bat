del _example.pyd
PATH = C:\Users\ROOZBEH\Downloads\swigwin-3.0.12;C:\Users\ROOZBEH\Downloads\mingw32\bin;C:\Python27
swig -python -c++ example.i 
g++ -shared example.c *.cxx -I C:\Python27\include -LC:\Python27\libs\ -lpython27 -o _example.pyd 
python example_test.py