%module example

%{
  #define SWIG_FILE_WITH_INIT
  #include "example.h"
%}

/* Include the NumPy typemaps library */
%include "numpy.i"
%include "std_vector.i"


%init %{
  import_array();
%}

/* Typemap for the sum_list(double* input_array, int length) C/C++ routine */
%apply (double* IN_ARRAY1, int DIM1) {(double* input_array, int length)};
%apply (double* ARGOUT_ARRAY1, int DIM1) {(double* output_array, int length)};
namespace std {
  %template(DoubleVector) vector<double>;
}

%include "example.h"