/* File : example.i */

/* This file has a few "typical" uses of C++ references. */

%module(directors="1") example
%{
#include "example.h"
%}

/* turn on director wrapping Callback */
%feature("director") Callback;

%include "example.h"



