//
// Created by ilong on 2020/2/28.
//

#ifndef ALGORITHM_QUICKSORT_H
#define ALGORITHM_QUICKSORT_H

#include "SortBase.h"

// O(nlogn) 快速排序
template <class DataType>
class QuickSort: public SortBase<DataType> {
public:

    virtual void sort(DataType d[], int n) override ;

private:
    void quickSort(DataType d[], int p, int r);
    int parttition(DataType data[], int p, int r);
};


#endif //ALGORITHM_QUICKSORT_H
