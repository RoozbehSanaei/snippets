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
  virtual void run() { std::cout << "Callback::run()" << std::endl; }
};

/* This helper function calls an overloaded operator */
%inline %{

void call(Callback *_callback0) { if (_callback0) _callback0->run(); }

%}

/* Wrapper around an array of vectors class */
