cls
md _build
PATH = C:\Users\ROOZBEH\Downloads\mingw32\bin;C:\Users\ROOZBEH\Downloads\swigwin-3.0.12;C:\Python27
swig -python -outdir _build -o _build/test_swig_wrap.c test_swig.i
gcc -shared -I C:\Python27\include -fPIC test.c  _build/test_swig_wrap.c -LC:\Python27\libs\ -lpython27 -o _build/_test_struct.pyd
python _build/python_test_1.py