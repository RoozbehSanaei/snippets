set -o xtrace
mypath=$PWD
mkdir build
swig -c++ -java -o $mypath/build/test_swig_wrap.c $mypath/example.i
g++ -I $mypath -shared  -fPIC  $mypath/build/test_swig_wrap.c -o $mypath/build/example.so 
javac -classpath $mypath/build runme.java -d $mypath/build
echo 
java -classpath $mypath/build runme
rm $mypath/build/*.*
rmdir build