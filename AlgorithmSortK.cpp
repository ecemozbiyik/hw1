

#include "AlgorithmSortK.h"
#include <iostream>
#include <ctime>

using namespace std;

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {

}


int AlgorithmSortK::select() {
    int kth=-1;
    int arraysize = 0;
    cin >> arraysize;

    int* notsorted = new int[k];

    for(int i=0; i<k; i++) {
        cin >> notsorted[i];
    }

    insertionSort(k, notsorted);

    for(int i=k; i<arraysize; i++)
    {
        int n = 0;
        cin >> n;

        if(n > notsorted[k-1]) {
            notsorted[k-1] = n;
            for(int i=0; (notsorted[k-i-1] > notsorted[k-i-2]); i++) {
                int temp = notsorted[k-i-2];
                notsorted[k-i-2] = n;
                notsorted[k-1-i] = temp;
            }
        }

    }

    kth = notsorted[k-1];

    return kth;

}