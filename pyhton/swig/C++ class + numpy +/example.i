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

%apply (int* INPLACE_ARRAY2, int DIM1, int DIM2) {(int* npyArray2D, int npyLength1D, int npyLength2D)}
%apply (int INPLACE_ARRAY2[ANY][ANY]) { (int yy[4][4]) };

%include "example.h"