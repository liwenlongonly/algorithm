//
// Created by ilong on 2020/3/1.
//

#ifndef ALGORITHM_RADIXSORT_H
#define ALGORITHM_RADIXSORT_H

#include "SortBase.h"

//O(n^2) 基数排序（只处理整数）
template <class DataType>
class RadixSort :public SortBase<DataType>{
public:
    virtual void sort(DataType d[], int n) override ;

private:
    void radixSort(DataType data[], int n, int d, int w);
};


#endif //ALGORITHM_RADIXSORT_H
