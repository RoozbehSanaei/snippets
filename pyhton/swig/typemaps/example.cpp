/* File example.cpp */
#include "example.h"

double example(double* input_list, int length) {

  /* Initialize sum */
  double sum = 0.;

  /* Compute sum of array elements */
  for (int i=0; i < length; i++)
    sum += input_list[i];

  return sum;
}
