#include <iostream>
#include <string>
#include "TestBed.h"
#include "SelectionAlgorithm.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortHeap.h"
#include <fstream>


using namespace std;
int main(int argc, char *argv[]) {
    string testfile;
    if (argc < 2) {
        cout << "Enter a test file name:" << endl;
        cin >> testfile;
    }
    else {
        testfile = argv[1];
    }
    ifstream file(testfile.c_str());
    if (file.is_open()) {
        cin.rdbuf(file.rdbuf());
    }
    else {
        cout << "Error: cannot read the test file!" << endl;
        return -1;
    }
    int type;
    cin >> type;

    int k;
    cin >> k;


    TestBed *testBed = new TestBed();
    testBed->setAlgorithm(type, k);
    testBed->execute();
    delete testBed;

    return 0;
}