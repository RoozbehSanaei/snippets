rm point.c
rm -r build
rm *.so
mkdir build
mkdir build/temp.linux-x86_64-3.5
#generate c from cython
cython --embed -o point.c point.pyx
#generate object file from c file
gcc -pthread -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -g -fstack-protector-strong -Wformat -Werror=format-security -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -I/usr/include/python3.5m -c point.c -o build/temp.linux-x86_64-3.5/point.o
#generate shareobject file from c file
gcc -pthread -shared -Wl,-O1 -Wl,-Bsymbolic-functions -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,-Bsymbolic-functions -Wl,-z,relro -g -fstack-protector-strong -Wformat -Werror=format-security -Wdate-time -D_FORTIFY_SOURCE=2 build/temp.linux-x86_64-3.5/point.o -o /home/rapsodo/Snippets/cython/simple-c-binding2/point.cpython-35m-x86_64-linux-gnu.so
python test.py