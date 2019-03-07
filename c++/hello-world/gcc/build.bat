PATH = C:\Users\ROOZBEH\Downloads\mingw64\bin;
cd /d %~dp0
g++  test.cpp -g -o test.exe
g++  test.cpp -g -o test.out
gdb test.exe