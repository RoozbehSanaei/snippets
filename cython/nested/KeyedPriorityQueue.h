#ifndef KEYEDPRIORITYQUEUE_H
#define KEYEDPRIORITYQUEUE_H
#include <iostream> 
#include <map>
#include <vector>


struct pos {
    float x;
    float y;
};

struct HeapNode {
    int a;
    int b;
    int c;
    pos d;
};


void push(HeapNode value);


#endif