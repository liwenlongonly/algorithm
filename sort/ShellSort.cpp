//
// Created by ilong on 2020/2/29.
//

#include "ShellSort.h"

template <class DataType>
void ShellSort<DataType>::sort(DataType d[], int n) {
     int i,j,flag,counter=1,gap=n;
     while (gap > 1){
         gap = gap/2;
         do{
             flag = 0;
             for (i = 0; i < n-gap-counter; i++) {
                 j = i+gap;
                 if(d[i] > d[j]){
                     SortBase<DataType>::swap(&d[i], &d[j]);
                     flag = 1;
                 }
             }
             counter++;
         }while (counter < n && flag == 1);
     }
}