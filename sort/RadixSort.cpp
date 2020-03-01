//
// Created by ilong on 2020/3/1.
//

#include "RadixSort.h"

template <class DataType>
void RadixSort<DataType>::sort(DataType d[], int n) {
    int max_d = 0; // 最大元素的位数
    int max_value = 0;
    for (int i = 0; i < n; ++i) {
        if(d[i] > max_value){
            max_value = d[i];
        }
    }
    std::string value = std::to_string(max_value);
    max_d = value.length();
    radixSort(d, n, max_d, 10);
}

// w 代表权重的进制，此处是10进制
template <class DataType>
void RadixSort<DataType>::radixSort(DataType data[], int n, int d, int w){
    DataType *temp = new DataType[n];
    DataType *count = new DataType[w];
    int i,j,k;
    int degree = 1;
    for(i = 1;i<=d;i++)
    {
        for(j = 0;j<w;j++)
        {
            count[j] = 0;
        }
        for(j = 0;j<n;j++)
        {
            k = (data[j]/degree)%10;
            count[k]++;
        }
        for(j = 1;j<w;j++)
        {
            count[j] = count[j]+count[j-1];
        }
        for(j = n-1;j>=0;j--)
        {
            k = data[j]/degree%10;
            count[k]--;
            temp[count[k]] = data[j];
        }
        for(j = 0;j<n;j++)
            data[j] = temp[j];
        degree = degree * 10;
    }
    delete [] temp;
    delete [] count;
}