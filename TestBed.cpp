
#include <ctime>
#include "TestBed.h"
#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include <iostream>

using namespace std;

TestBed :: TestBed() {
    algorithm = 0;
}


void TestBed::execute() {

    clock_t start = clock();
    int result = 0;
    result = algorithm->select();
    clock_t end = clock();

    double cpu_time = static_cast<double>( end - start );

    cout << "Result : " << result << endl;
    cout<< "Duration (in sec): " << cpu_time << endl;
}


void TestBed::setAlgorithm(int k, int type) {
    if(type == 1) {
        this->algorithm = new AlgorithmSortAll(k);

    } else if (type == 2) {
        this->algorithm = new AlgorithmSortK(k);
    }
}

TestBed ::~TestBed() {
    delete algorithm;
}
