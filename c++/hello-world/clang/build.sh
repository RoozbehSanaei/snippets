#install Clang
sudo apt-get update
sudo apt-get install clang-3.7

PATH = C:\Users\ROOZBEH\Downloads\mingw64\bin;C:\Program Files\LLVM\bin;
cd $PWD
clang++ -std=c++14 -pedantic test.cpp -v
./a.out