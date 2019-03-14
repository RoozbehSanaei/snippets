#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>

inline void print_vec(const std::vector<std::string>& v) {
  std::copy(v.begin(),v.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}

inline void print_vec_vec(const std::vector<std::vector<std::string> >& v) {
  std::for_each(v.begin(),v.end(),print_vec);
}

std::vector<std::vector<std::string> > make() {
  static std::vector<std::string> test1;
  static std::vector<std::string> test2;

  static std::vector<std::vector<std::string> > ret;
  test1.push_back("hello");
  test2.push_back("world");
  test2.push_back("another");
  ret.push_back(test1);
  ret.push_back(test2);
  return ret;
}