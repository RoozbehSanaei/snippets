#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float multiply;
  float* arr;
} Point;


float* quick_sort (Point p, int n) {
    float* a = p.arr;
    float* array;
    array = (float*) malloc(sizeof(float)*n);
    for (int i = 0;i<n;i++) {
    array[i] = 2*a[i];
    }
    return array;
}
