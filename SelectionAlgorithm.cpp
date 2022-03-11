
#include "SelectionAlgorithm.h"

SelectionAlgorithm::SelectionAlgorithm(int k) {
    this->k = k;

}

int SelectionAlgorithm::select() {
    return 0;
}

void SelectionAlgorithm::insertionSort(int arraysize, int *array) {
    for(int i=1; i<arraysize; i++) {
        int origin = array[i];
        int a = i;

        while((array[a-1] < origin) && (a>0)) {
            array[a] =array[a-1];
            a=a-1;
        }

        array[a] = origin;
    }
}