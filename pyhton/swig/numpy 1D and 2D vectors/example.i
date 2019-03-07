%module example

%{
  #define SWIG_FILE_WITH_INIT
  #include "example.h"
%}

/* Include the NumPy typemaps library */
%include "numpy.i"
%include "std_vector.i"
%include "stl.i"


%init %{
  import_array();
%}


namespace std {
   %template(vd) vector<double>;
   %template(vvd) vector<vector<double> >;
   %template(vi) vector<int>;
   %template(vvi) vector<vector<int> >;

};


%include "example.h"