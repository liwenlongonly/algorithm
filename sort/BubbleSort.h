//
// Created by ilong on 2020/2/28.
//

#ifndef ALGORITHM_BUBBLESORT_H
#define ALGORITHM_BUBBLESORT_H

#include "SortBase.h"

// O(n)~O(n^2) 冒泡排序
template <class DataType>
class BubbleSort: public SortBase<DataType> {
public:

    virtual void sort(DataType data[], int n) override ;
};


#endif //ALGORITHM_BUBBLESORT_H
