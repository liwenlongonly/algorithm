//
// Created by ilong on 2020/2/29.
//

#ifndef ALGORITHM_SELECTIONSORT_H
#define ALGORITHM_SELECTIONSORT_H

#include "SortBase.h"
// O(n^2)
template <class DataType>
class SelectionSort : public SortBase<DataType> {
public:

    virtual void sort(DataType d[], int n) override ;
};


#endif //ALGORITHM_SELECTIONSORT_H
