from prog import *

a = np.array(np.random.rand(300,300),dtype='float32')
b = quicksort_c(a)

c = img_sum_pix(a)
print(b/a)
print(np.sum(a)-c)