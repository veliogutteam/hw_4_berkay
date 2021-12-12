//
// Created by Berkay Çelik on 2019-03-08.
//

#include "AlgorithmSortK.h"
#include "SelectionAlgorithm.h"
#include <iostream>
using namespace std;

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortK::select() {
    int N;
    cin >> N;
    int *numbers = new int[k];
    for(int a = 0; a < k; a++){
        cin >> numbers[a];
    }

    insertionSort(numbers,k);

    int * rest = new int[N-k];
    for(int i = 0; i < N-k;i++){
        int temp;
        cin >> temp;
        numbers[i] = temp;
    }

    for(int i = 0; i < N-k;i++){
        if (rest[i] > numbers[k-1]) {
            for(int seq = k - 1 ; seq>0; seq--) {
                if(rest[i] < numbers[seq]) {
                    // shift
                    for(int j = 0; j < k-1; j++){
                        numbers[seq + j + 2] = numbers[seq + j + 1];
                    }
                    numbers[seq+1] = rest[i];
                }
            }
        }
    }

    int result = numbers[k-1];
    delete [] numbers;
    delete [] rest;
    return result;
}

void AlgorithmSortK::insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
