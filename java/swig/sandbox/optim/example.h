/* File : example.h */

#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Vector {
private:
	double* doubleArray_;
	double x,y,z;
public:
  Vector() : x(0), y(0), z(0) { }
  Vector(double x, double y, double z) : x(x), y(y), z(z) { }
  void set_doubleArray(double doubleArray[]) {doubleArray_ = doubleArray; }
  void get_doubeArray(double doubleArray[]) {doubleArray = doubleArray_; }
  char *print();
};


class Callback {
private:
  Vector _Vec;
public:
  void set_vec(Vector Vec) {_Vec = Vec; }
  virtual ~Callback() { std::cout << "Callback::~Callback()" << std:: endl; }
  virtual void run(Vector vec) {}
  void call() {run(_Vec); }

};

char *Vector::print() {
  static char temp[512];
  std::cout << doubleArray_[0] << " , " << doubleArray_[1] << " , " << doubleArray_[2] << " , " << doubleArray_[3] << "\n";
  std::cout << x << " , " << y << " , " << z << "\n";

  return temp;
}
