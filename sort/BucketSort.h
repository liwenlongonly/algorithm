//
// Created by ilong on 2020/3/1.
//

#ifndef ALGORITHM_BUCKETSORT_H
#define ALGORITHM_BUCKETSORT_H

#include "SortBase.h"

template <class DataType>
class BucketSort :public SortBase<DataType>{
public:
    virtual void sort(DataType d[], int n) override ;
};


#endif //ALGORITHM_BUCKETSORT_H
