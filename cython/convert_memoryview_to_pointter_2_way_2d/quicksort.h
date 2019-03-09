#include <stdio.h>
#include <stdlib.h>

float* quick_sort (float* a, int n) {
    float* array;
    array = (float*) malloc(sizeof(float)*n);
    for (int i = 0;i<n;i++) {
    array[i] = 2*a[i];
    }
    return array;
}

