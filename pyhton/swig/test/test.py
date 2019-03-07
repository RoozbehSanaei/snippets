import numpy as np
from numpy.random import rand
from example import *

def makeArray(rows, cols):
    return np.array(np.zeros(shape=(rows, cols)), dtype=np.intc)


arr2D = makeArray(4, 4)
func2(arr2D)
print ("two dimensional array")
print (arr2D)


input_array1 = rand(5)
sum = sum_array(input_array1,arr2D)
print('The sum of the array is %d' % (sum))


input_array2 = rand(5)
sum = sum_array2(input_array1,input_array2)
print('The sum of the array is %d' % (sum))




print ("get random array:")
output_array = get_rand_array(10)
print (output_array)

print ("get random list:")
output_list = list(double_list(10,input_array1))
print (input_array1)
print (output_list)


A=np.array([[i*j for i in range(3)] for j in range(3)],dtype=np.intc)

arrayFunction(A)
print ("two dimensional array")
print (np.sum(arr2D))


