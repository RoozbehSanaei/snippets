/* File : example.h */

#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Vector {
private:
	double* doubleArray_;
public:
  void set_doubleArray(double doubleArray[]) {doubleArray_ = doubleArray; std::cout << doubleArray[0] << "\n";  }
  void get_doubleArray(double doubleArray[]) {doubleArray = doubleArray_; std::cout << doubleArray[0] << "\n";}
};
