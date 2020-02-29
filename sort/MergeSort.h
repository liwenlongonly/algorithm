//
// Created by ilong on 2020/2/28.
//

#ifndef ALGORITHM_MERGESORT_H
#define ALGORITHM_MERGESORT_H

#include "SortBase.h"

//O(nlogn) 归并排序
template <class DataType>
class MergeSort: public SortBase<DataType> {
public:

    virtual void sort(DataType d[], int n) override ;

private:
    void merge(DataType a[], DataType b[], DataType c[], int a_len, int b_len);
};


#endif //ALGORITHM_MERGESORT_H
