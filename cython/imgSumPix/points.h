#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	unsigned int width;
	unsigned int height;
	unsigned int widthCropped;
	unsigned int heightCropped;
	unsigned int startX;
	unsigned int startY;
	unsigned int endX;
	unsigned int endY;
	float *image;
	unsigned short timeStamp;
} RAPSODO_IMAGE_TYPE;


float* quick_sort1 (RAPSODO_IMAGE_TYPE *p, int n) {
    float* a = p->image;
    float* array;
    float sum = 0;
    array = (float*) malloc(sizeof(float)*n);
    for (int i = 0;i<n;i++) {
    array[i] = 2*a[i];
    sum += a[i];
    }
    printf("%f\n",sum);
    return array;
}



float imgSumPix (RAPSODO_IMAGE_TYPE *p) {
    float sum = 0;
    float* a = p->image;
    unsigned int col;

    for ( col = 0;col<(p->width)*(p->height);col++) {
    sum += *(p->image+col);
    }
    return sum;
}