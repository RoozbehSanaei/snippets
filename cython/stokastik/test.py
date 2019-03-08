from PyKeyedPriorityQueue import PyKeyedPriorityQueue
import numpy as np
n = 1000000
arr1 = np.random.randint(low=0, high=50, size=(n,))
arr2 = np.random.randint(low=100, high=500, size=(n,))
arr3 = np.arange(n)
arr = np.vstack((arr1, arr2, arr3)).T
queue = PyKeyedPriorityQueue(arr)

print(queue.get(1))
queue.push([13, 268, n])
print(queue.pop())
print(queue.pop(10))
print(queue.size())