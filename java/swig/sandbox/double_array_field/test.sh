set -o xtrace
mypath=$PWD
jni=/usr/lib/jvm/java-8-openjdk-amd64/include
jni_md=/usr/lib/jvm/java-8-openjdk-amd64/include/linux
mkdir build
swig -c++ -java -o $mypath/build/test_swig_wrap.c $mypath/example.i
g++ -Wall -I $mypath -I $jni -I $jni_md -shared  -fPIC $mypath/build/test_swig_wrap.c -o $mypath/build/example.so 
javac -classpath $mypath/build runme.java -d $mypath/build
echo 
java -classpath $mypath/build runme
#rm $mypath/build/*.*
#rmdir build