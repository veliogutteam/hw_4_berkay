//
// Created by Berkay Çelik on 2019-05-03.
//

#ifndef HW3_ALGORITHMSORTQUICK_H
#define HW3_ALGORITHMSORTQUICK_H

#include "SelectionAlgorithm.h"

class AlgorithmSortQuick : public SelectionAlgorithm{
public:
    AlgorithmSortQuick(int k);
    int select();
    void insertionSort(int arr[], int n);
    int partition(int arr[], int l, int r);
    int quickSelect(int arr[], int l, int r, int k);
    void swap(int* a, int* b);
};


#endif //HW3_ALGORITHMSORTQUICK_H
