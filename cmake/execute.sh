#install cmake
sudo apt-get install software-properties-common
sudo add-apt-repository ppa:george-edison55/cmake-3.x
sudo apt-get update
sudo apt-get install cmake
sudo apt-get upgrade

#execute cmake in the directory
cmake .
make
./hello
