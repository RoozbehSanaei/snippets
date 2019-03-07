set -o xtrace
mkdir build
jni_path=/usr/lib/jvm/java-8-oracle/include
jni_md_path=/usr/lib/jvm/java-8-oracle/include/linux
javac test.java -d build
javah -d build test 
g++ -I $jni_path -I $jni_md_path test.cpp -shared -fPIC -o build/test.so
java -classpath build test
rm -rf build
