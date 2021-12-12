//============================================================================
// Name        : BinaryHeap.h
// Author      : Hasan Sozer
// Version     : 1.2
// Copyright   : (c) 2014 Ozyegin University
// Description : Includes the header file of the BinaryHeap class that will be 
//               used as part of the program to be submitted as Homework 3,  
//               which is assigned in the context of the course CS201, 
//               Data Structures and Algorithms.
//============================================================================
#ifndef __BINARYHEAP__
#define __BINARYHEAP__

class BinaryHeap {

public:
    BinaryHeap(int); // constructor that takes the capacity of the structure
    ~BinaryHeap(); // destructor
    void insert(int); // inserts a new element to the heap
    void deleteMin(); // removes the minimum element from the heap
    int getMin(); // returns the minimum element int the heap, returns -1 if the heap is empty

private:
    int *heap; // array to store the elements of the heap
    int size; // keeps the number of elements in the heap
    int capacity; // keeps the total capacity of the heap
    int hole;

    void percolateDown(int);

    void swap(int, int);
};

#endif