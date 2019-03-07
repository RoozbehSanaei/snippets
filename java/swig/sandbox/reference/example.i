/* File : example.i */

/* This file has a few "typical" uses of C++ references. */

%module(directors="1") example
%{
#include "example.h"
%}

/* turn on director wrapping Callback */
%feature("director") Callback;



class Callback {
public:
  virtual ~Callback() { std::cout << "Callback::~Callback()" << std:: endl; }
  virtual void run(Vector _Vec) {}
};


class Caller {
private:
  Callback *_callback;
  Vector _Vec;
public:
  Caller(): _callback(0) {}
  ~Caller() { delCallback(); }
  void set_vec(Vector Vec) {_Vec = Vec; }
  void delCallback() { delete _callback; _callback = 0; }
  void setCallback(Callback *cb) { delCallback(); _callback = cb; }
  void call() { if (_callback) _callback->run(_Vec); }
};

class Vector {
public:
    Vector(double x, double y, double z);
   ~Vector();
    char *print();
};

/* This helper function calls an overloaded operator */
%inline %{

Vector addv(Vector &a, Vector &b) {
  return a+b;
}


void call_v(Callback *_callback, Vector &_Vec) {
  _callback->run(_Vec);
}

%}

/* Wrapper around an array of vectors class */

class VectorArray {
public:
  VectorArray(int maxsize);
  ~VectorArray();
  int size();

  /* This wrapper provides an alternative to the [] operator */
  %extend {
    Vector &get(int index) {
      return (*$self)[index];
    }
    void set(int index, Vector &a) {
      (*$self)[index] = a;
    }
  }
};
