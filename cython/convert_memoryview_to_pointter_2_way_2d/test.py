import numpy as np
from cy_quicksort import quicksort_c
a = np.array([[0,1,2],[3,4,5],[6,7,8]],dtype='float')
print(a)
b = quicksort_c(a)
print(b)
