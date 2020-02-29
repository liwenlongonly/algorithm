//
// Created by ilong on 2020/2/28.
//

#include "MergeSort.h"

template <class DataType>
void MergeSort<DataType>::sort(DataType d[], int n) {
    if(n > 1){
        int i = n/2;
        int j = n-n/2;
        DataType b[n/2];
        DataType c[n-n/2];
        for (int k = 0; k < i; ++k) {
            b[k] = d[k];
        }
        for (int k = 0; k < j; ++k) {
            c[k] = d[k+i];
        }
        sort(b, i);
        sort(c, j);
        merge(b, c, d, i, j);
    }
}

template <class DataType>
void MergeSort<DataType>::merge(DataType a[], DataType b[], DataType c[], int a_len, int b_len) {
    int i=0,j=0,counter=0;
    while(counter < a_len +b_len){
        if(a[i] < b[j]){
            c[counter] = a[i];
            i++;
            counter++;
        } else{
            c[counter] = b[j];
            j++;
            counter++;
        }
        if(i == a_len){
            while(j < b_len){
                c[counter] = b[j];
                j++;
                counter++;
            }
        } else if(j == b_len){
            while (i < a_len){
                c[counter] = a[i];
                i++;
                counter++;
            }
        }
    }
}