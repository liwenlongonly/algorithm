//
// Created by ilong on 2020/3/1.
//

#ifndef ALGORITHM_COUNTINGSORT_H
#define ALGORITHM_COUNTINGSORT_H

#include "SortBase.h"

//O(n) 计数排序(只能对整数进行排序)
template <class DataType>
class CountingSort: public SortBase<DataType> {
public:

    virtual void sort(DataType d[], int n) override ;
};


#endif //ALGORITHM_COUNTINGSORT_H
