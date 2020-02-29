//
// Created by ilong on 2020/2/29.
//

#include "SelectionSort.h"

template <class DataType>
void SelectionSort<DataType>::sort(DataType d[], int n) {
    int i=1,j;
    int max;
    while (i <= n-1){
        max = n-i;
        for (j = 0; j < n-i+1; ++j) {
            if(d[j] > d[max]){
                max = j;
            }
        }
        if(max != n-i){
            SortBase<DataType>::swap(&d[max], &d[n-i]);
        }
        i++;
    }
}