//
// Created by Berkay Çelik on 2019-03-05.
//

#ifndef HW1_TESTBED_H
#define HW1_TESTBED_H

#include <string>
#include <iostream>
#include "SelectionAlgorithm.h"

using namespace std;

class TestBed {
public:
    TestBed();
    ~TestBed();
    void execute();
    void setAlgorithm(int type, int k);

protected:
    SelectionAlgorithm *algorithm;
};


#endif //HW1_TESTBED_H
