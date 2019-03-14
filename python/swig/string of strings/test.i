%module test

%{
#include "test.hh"
%}

namespace std {
template <typename T>
class vector {
};
}

%extend std::vector<std::vector<std::string> > {
  std::vector<std::string> __getitem__(unsigned i) throw(std::out_of_range) {
    return $self->at(i);
  }
}

%extend std::vector<std::string> {
  const char * __getitem__(unsigned i) throw(std::out_of_range) {
    return $self->at(i).c_str();
  }
}

%template (VecString) std::vector<std::string>;
%template (VecVecString) std::vector<std::vector<std::string> >;

%include "test.hh"