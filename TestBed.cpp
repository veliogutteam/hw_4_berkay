//
// Created by Berkay Çelik on 2019-03-05.
//

#include "TestBed.h"
#include <ctime>
#include <iostream>
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
using namespace std;

TestBed::TestBed() {
}
TestBed::~TestBed() {
    delete algorithm;
}

void TestBed::execute(){
    int result = 0;
    clock_t start = clock();
    result = algorithm->select();
    clock_t end = clock();
    double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "Result: "<< result << endl;
    cout << "Duration: "<< cpu_time << endl;
}


void TestBed::setAlgorithm(int type, int k){
    if(type == 1){
        algorithm = new AlgorithmSortAll(k);
    }
    else if (type == 2){
        algorithm = new AlgorithmSortK(k);
    }
    else if (type == 3){
        algorithm = new AlgorithmSortHeap(k);
    }
    else if (type == 4){
        algorithm = new AlgorithmSortQuick(k);
    }
}