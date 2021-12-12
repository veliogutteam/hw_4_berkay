//
// Created by Berkay Çelik on 2019-05-03.
//

#include "AlgorithmSortQuick.h"
#include "SelectionAlgorithm.h"
#include <iostream>
using namespace std;

AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortQuick::select() {
    int N;
    cin >> N;
    int *S = new int[N];
    for(int a = 0; a < N; a++){
        cin >> S[a];
    }
    if(N <= 10) {
        insertionSort(S,N);
        int result = S[k];
        delete [] S;
        return result;
    }
    else {
        quickSelect(S,0,N-1,k);
    }

}

int AlgorithmSortQuick::quickSelect(int *arr, int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {

        // Partition the array around last
        // element and get position of pivot
        // element in sorted array
        int index = partition(arr, l, r);

        // If position is same as k
        if (index - l == k - 1)
            return arr[index+1];

        // If position is more, recur
        // for left subarray
        if (index - l > k - 1)
            return quickSelect(arr, l, index - 1, k);

        // Else recur for right subarray
        return quickSelect(arr, index + 1, r,
                           k - index + l - 1);
    }

    // If k is more than number of
    // elements in array
    return 0;
}

int AlgorithmSortQuick::partition(int *arr, int l, int r){
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

void AlgorithmSortQuick::swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void AlgorithmSortQuick::insertionSort(int *arr, int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}