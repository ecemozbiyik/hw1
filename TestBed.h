

#ifndef UNTITLED22_TESTBED_H
#define UNTITLED22_TESTBED_H


#include "SelectionAlgorithm.h"

class TestBed {

public:
    void execute();
    void setAlgorithm(int, int);
    TestBed();
    ~TestBed();


private:

    SelectionAlgorithm* algorithm;
};

#endif