#include <stdio.h>
#include <stdlib.h>

int* quick_sort (int* a, int n) {
    int* array;
    array = (int*) malloc(sizeof(int)*n);
    int i, j, p, t;
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (a[i] < p)
            i++;
        while (p < a[j])
            j--;
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    quick_sort(a, i);
    quick_sort(a + i, n - i);
    for (i = 0;i<n;i++) {
    array[i] = a[i];
    }
    return array;
}

