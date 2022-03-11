
#include "AlgorithmSortAll.h"
#include <ctime>
#include <iostream>

using namespace std;

AlgorithmSortAll::AlgorithmSortAll(int k) :  SelectionAlgorithm(k) {

}

int AlgorithmSortAll::select() {

    int kth = -1;
    int arraysize = 0;
    cin >> arraysize;

    int* notsorted = new int[arraysize];

    int i = 0;
    while(i<arraysize) {
        cin >> notsorted[i];
    }

    insertionSort(arraysize, notsorted);
    kth = notsorted[k-1];

    delete[] notsorted;
    return kth;

}