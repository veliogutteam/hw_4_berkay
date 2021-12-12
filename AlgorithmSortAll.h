//
// Created by Berkay Çelik on 2019-03-06.
//

#ifndef HW1_ALGORITHMSORTALL_H
#define HW1_ALGORITHMSORTALL_H


#include "SelectionAlgorithm.h"

class AlgorithmSortAll : public SelectionAlgorithm {
public:
    AlgorithmSortAll(int k);
    int select();
    void insertionSort(int arr[], int n);

};


#endif //HW1_ALGORITHMSORTALL_H
