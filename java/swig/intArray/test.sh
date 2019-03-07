set -o xtrace
mypath=$PWD
mkdir build
swig -java -o $mypath/build/test_swig_wrap.c $mypath/example.i
gcc -shared  -fPIC  $mypath/example.c $mypath/build/test_swig_wrap.c -o $mypath/build/example.so 
javac -classpath $mypath/build runme.java -d $mypath/build
echo 
java -classpath $mypath/build runme
rm $mypath/build/*.*
rmdir build