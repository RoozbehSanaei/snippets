set -o xtrace
swig -c++ -java -o test_swig_wrap.cxx example.i
g++ -shared  -fPIC  example.c test_swig_wrap.cxx -o example.so 
javac main.java
java main
rm *.class
rm example.java
#rm exampleJNI.java
rm *.cxx
rm *.so