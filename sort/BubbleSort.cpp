//
// Created by ilong on 2020/2/28.
//

#include "BubbleSort.h"

template <class DataType>
void BubbleSort<DataType>::sort(DataType data[], int n){
    int flag;
    int i = 1,j;
    do{
        flag = 0;
        for (j = 0; j+1 < n; j++) {
            if(data[j] > data[j+1]){
                SortBase<DataType>::swap(&data[j], &data[j+1]);
                flag = 1;
            }
        }
        i++;
    }while(i < n && flag == 1);
}
