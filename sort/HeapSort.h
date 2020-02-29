//
// Created by ilong on 2020/2/29.
//

#ifndef ALGORITHM_HEAPSORT_H
#define ALGORITHM_HEAPSORT_H

#include "SortBase.h"

//O(nlogn) 堆排序
template <class DataType>
class HeapSort :public SortBase<DataType>{
public:
    virtual void sort(DataType d[], int n) override ;
};


#endif //ALGORITHM_HEAPSORT_H
