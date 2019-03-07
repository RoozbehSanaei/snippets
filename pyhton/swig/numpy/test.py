import numpy
from numpy.random import rand
from example import *

def makeArray(rows, cols):
    return numpy.array(numpy.zeros(shape=(rows, cols)), dtype=numpy.intc)


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




arr2D = makeArray(28, 28)
arrayFunction(arr2D)
print ("two dimensional array")
print (numpy.sum(arr2D))


