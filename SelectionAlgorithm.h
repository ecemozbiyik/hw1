

#ifndef UNTITLED22_SELECTIONALGORITHM_H
#define UNTITLED22_SELECTIONALGORITHM_H


class SelectionAlgorithm {
public:
    SelectionAlgorithm(int);

    virtual int select();

    void insertionSort(int, int *);


protected:
    int k;
};

#endif




