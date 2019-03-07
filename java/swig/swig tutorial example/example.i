/* File : example.i */
%module example

%{
#include "example.h"
#include "lbfgs.h"

%}

/* Let's just grab the original header file here */
%include "example.h"
%include "lbfgs.h"