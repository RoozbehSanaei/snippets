import numpy as np
from cy_quicksort import quicksort_c
a = np.array(range(9, 0, -1), dtype=np.int32)
print(a)
b = quicksort_c(a)
print(b)
