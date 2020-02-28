//
// Created by ilong on 2020/2/28.
//

#ifndef ALGORITHM_INSERTSORT_H
#define ALGORITHM_INSERTSORT_H

#include "SortBase.h"

// O(n)~O(n^2) 插入排序
template <class DataType>
class InsertSort: public SortBase<DataType> {
public:

    virtual void sort(DataType d[], int n) override ;
};


#endif //ALGORITHM_INSERTSORT_H
