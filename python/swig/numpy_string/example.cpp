/* File example.cpp */
#include "example.h"

/* Define function implementation */
double sum_array(double* input_array, int length,int jojo[4][4]) {

  /* Initialize sum */
  double sum = 0.;

  /* Compute sum of array elements */
  for (int i=0; i < length; i++)
    sum += input_array[i];

  return sum;
}


double sum_array2(double* input_array, int length,double* input_array2, int length2) {

  /* Initialize sum */
  double sum = 0.;

  /* Compute sum of array elements */
  for (int i=0; i < length; i++)
    sum += input_array[i];

  for (int i=0; i < length2; i++)
    sum += input_array2[i];

  return sum;
}







void get_rand_array(double* output_array, int length) {

  /* Populate input NumPy array with random numbers */
  for (int i=0; i < length; i++)
    output_array[i] = ((double) rand()) / RAND_MAX;

  return;
}

std::vector<double> double_list(int length,std::vector<double>  arg) {

  /* Allocate memory for the C++ STL vector */
  std::vector<double> output_list(length);

  /* Populate vector with random numbers */
  for (int i=0; i < length; i++)
    output_list[i] = 2*arg[i];

  return output_list;
}



void arrayFunction(int* npyArray2D, int npyLength1D, int npyLength2D)
{
    for(int i = 0; i < npyLength1D; ++i)
    {
        for(int j = 0; j < npyLength2D; ++j)
        {
            int nIndexJ = i * npyLength2D + j;
            // operate on array
            npyArray2D[nIndexJ] = i * npyLength2D + j;
        }
    }
}

void func2(std::string jojo[4][4])
{
  for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            jojo[i][j] = i*j;
        }
    }
}
