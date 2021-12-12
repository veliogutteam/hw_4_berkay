//
// Created by Berkay Çelik on 2019-03-08.
//

#ifndef HW1_ALGORITHMSORTK_H
#define HW1_ALGORITHMSORTK_H


#include "SelectionAlgorithm.h"

class AlgorithmSortK : public SelectionAlgorithm {
public:
    AlgorithmSortK(int k);
    int select();
    void insertionSort(int arr[], int n);
};


#endif //HW1_ALGORITHMSORTK_H
