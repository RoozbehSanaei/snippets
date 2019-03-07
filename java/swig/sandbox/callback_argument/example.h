/* File : example.h */

#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


class Callback {
public:
  virtual ~Callback() { std::cout << "Callback::~Callback()" << std:: endl; }
  virtual void run(double doubleArray[]) { std::cout << "Callback::run()" << std::endl; }
};


