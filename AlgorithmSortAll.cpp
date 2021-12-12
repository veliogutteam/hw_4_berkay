//
// Created by Berkay Çelik on 2019-03-06.
//
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;


AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortAll::select() {
    int N;
    cin >> N;
    int *numbers = new int[N];
    for(int a = 0; a < N; a++){
        cin >> numbers[a];
    }
    insertionSort(numbers,N);
    int result = numbers[k-1];
    delete [] numbers;
    return result;
}

void AlgorithmSortAll::insertionSort(int arr[], int n) {
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