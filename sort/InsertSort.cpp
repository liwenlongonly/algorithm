//
// Created by ilong on 2020/2/28.
//

#include "InsertSort.h"

template <class DataType>
void InsertSort<DataType>::sort(DataType d[], int n){
    int i, j;
    for (int j = 2; j < n; j++) {
        d[0] = d[j];
        i = j - 1;
        while (i>0 && d[i]>d[0]){
            d[i+1] = d[i];
            i--;
        }
        d[i+1] = d[0];
    }
}