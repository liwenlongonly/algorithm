//
// Created by ilong on 2020/3/1.
//

#include "CountingSort.h"

template <class DataType>
void CountingSort<DataType>::sort(DataType d[], int n) {
    int i,k,dx=0;
    DataType max=d[0],mini=d[0];
    for (i = 0; i < n; ++i) {
        if(d[i] > max){
            max = d[i];
        } else if(d[i] < mini){
            mini = d[i];
        }
    }
    k = max - mini + 1;
    DataType *b = (DataType *)malloc(k* sizeof(DataType));
    for (int j = 0; j < k; ++j) {
        b[j] = 0;
    }
    for (int i = 0; i < n; ++i) {
        b[d[i]-mini]++;
    }
    for (int i = 0; i < k; ++i) {
        while ((b[i]--) > 0){
            d[dx++] = i+mini;
        }
    }
    free(b);
}