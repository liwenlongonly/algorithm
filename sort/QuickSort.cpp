//
// Created by ilong on 2020/2/28.
//

#include "QuickSort.h"

template <class DataType>
void QuickSort<DataType>::sort(DataType d[], int n) {
    quickSort(d, 0, n-1);
}

template <class DataType>
void QuickSort<DataType>::quickSort(DataType d[], int p, int r){
    int position = 0;
    if(p < r){
        position = parttition(d, p, r);
        quickSort(d, p, position-1);
        quickSort(d, position+1, r);
    }
}

template <class DataType>
int QuickSort<DataType>::parttition(DataType data[], int p, int r) {
    DataType temp = data[r];
    int i = p-1;
    for (int j = p; j < r; ++j) {
        if(data[j] <= temp){
            i+=1;
            SortBase<DataType>::swap(&data[i], &data[j]);
        }
    }
    SortBase<DataType>::swap(&data[i+1], &data[r]);
    return i+1;
}