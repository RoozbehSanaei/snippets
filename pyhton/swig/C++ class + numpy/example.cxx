/* File : example.cxx */

#include "example.h"
#define M_PI 3.14159265358979323846

/* Move the shape to a new location */
void Shape::move(double dx, double dy) {
  x += dx;
  y += dy;
}

int Shape::nshapes = 0;

double Circle::area() {
  return M_PI*radius*radius;
}

double Circle::perimeter() {
  return 2*M_PI*radius;
}

double Square::area() {
  return width*width;
}

double Square::perimeter() {
  return 4*width;
}

int * Square::make_array() {
	static int A[10] = {1,2,3,4,5,6,7,8,9,10};
	return A;
}



/* Define function implementation */
double Circle::sum_array(double* input_array, int length) {

  /* Initialize sum */
  double sum = 0.;

  /* Compute sum of array elements */
  for (int i=0; i < length; i++)
    sum += input_array[i];

  return sum;
}


void Circle::get_rand_array(double* output_array, int length) {

  /* Populate input NumPy array with random numbers */
  for (int i=0; i < length; i++)
    output_array[i] = ((double) rand()) / RAND_MAX;

  return;
}

std::vector<double> Circle::get_rand_list(int length) {

  /* Allocate memory for the C++ STL vector */
  std::vector<double> output_list(length);

  /* Populate vector with random numbers */
  for (int i=0; i < length; i++)
    output_list[i] = ((double) rand()) / RAND_MAX;

  return output_list;
}