//
// Created by Berkay Çelik on 2019-04-12.
//

#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"
#include <iostream>

using namespace std;

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortHeap::select() {
    int in;
    int n;
    cin >> n;
    BinaryHeap *binaryH = new BinaryHeap(k);
    for (int i = 0; i < k; i++) {
        cin >> in;
        binaryH->insert(in);
    }
    for (int j = k; j < n; j++) {
        cin >> in;
        int *val = new int(binaryH->getMin());

        if (in >= *val) {
            binaryH->deleteMin();
            binaryH->insert(in);
        }
        delete[] val;
    }
    int result = binaryH->getMin();
    return result;
}

