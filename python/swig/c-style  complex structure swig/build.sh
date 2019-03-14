clear
mkdir -p _build
swig -python -outdir _build -o _build/test_swig_wrap.c test_swig.i
gcc -shared  -I /usr/include/python2.7/ -fPIC  test.c _build/test_swig_wrap.c -o _build/_test_struct.so 
python _build/python_test_1.py
