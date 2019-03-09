cdef extern from "KeyedPriorityQueue.h":

    cdef struct pos:
        float x, y

    cdef struct HeapNode:
        int a, b, c
        pos d

def push(value):
    cdef HeapNode node
    print("here: ",value)
    node.a = value[0]
    node.b = value[1]  
    node.c = value[2]
    node.d.x = value[3][0]
    node.d.y = value[3][1]
    return push(node)