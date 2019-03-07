/* File example.h */
#include <stdlib.h>
#include <vector>
#include <string>

/* Define function prototype to take in a NumPy array */
double sum_array(double* input_array, int length,int jojo[4][4]);
double sum_array2(double* input_array, int length,double* input_array2, int length2);
void get_rand_array(double* output_array, int length);
std::vector<double> double_list(int length,std::vector<double>  arg);
void arrayFunction(int* npyArray2D, int npyLength1D, int npyLength2D);
void func2(std::string jojo[4][4]);
