/* File : example.h */

#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Vector {
private:
  double x,y,z;
public:
  Vector() : x(0), y(0), z(0) { }
  Vector(double x, double y, double z) : x(x), y(y), z(z) { }
  friend Vector operator+(const Vector &a, const Vector &b);
  char *print();
};

Vector addv(Vector &a, Vector &b) {
  return a+b;
}

class Callback {
public:
  virtual ~Callback() { std::cout << "Callback::~Callback()" << std:: endl; }
  virtual void run(int a) {  }
};


class Caller {
private:
  Callback *_callback;
public:
  Caller(): _callback(0) {}
  ~Caller() { delCallback(); }
  void delCallback() { delete _callback; _callback = 0; }
  void setCallback(Callback *cb) { delCallback(); _callback = cb; }
  void call() { if (_callback) _callback->run(2); }
};


Vector operator+(const Vector &a, const Vector &b) {
  Vector r;
  r.x = a.x + b.x;
  r.y = a.y + b.y;
  r.z = a.z + b.z;
  return r;
}

char *Vector::print() {
  static char temp[512];
  sprintf(temp,"Vector %p (%g,%g,%g)", (void *)this, x,y,z);
  return temp;
}


