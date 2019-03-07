set -o xtrace
swig -java -o test_swig_wrap.c example.i
gcc -shared  -fPIC  example.c test_swig_wrap.c -o example.so 
javac runme.java
java runme
rm *.class
rm example.java
rm exampleJNI.java
rm test_swig_wrap.c
rm *.so