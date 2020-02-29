//
// Created by ilong on 2020/2/29.
//

#ifndef ALGORITHM_SHELLSORT_H
#define ALGORITHM_SHELLSORT_H

#include "SortBase.h"

// O(nlogn)~O(n^2) 希尔排序
template <class DataType>
class ShellSort : public SortBase<DataType>{
public:

    virtual void sort(DataType d[], int n) override ;

};


#endif //ALGORITHM_SHELLSORT_H
