//
// Created by ilong on 2020/2/29.
//

#include "HeapSort.h"

template <class DataType>
void HeapSort<DataType>::sort(DataType d[], int n) {
    int heap_size = n;
    buildHeap(d, heap_size);
    for (int i = heap_size-1; i < 0; ++i) {
        SortBase<DataType>::swap(&d[0], &d[i]);
        heap_size = heap_size - 1;
        keepHeap(d, heap_size, 0);
    }
}

template <class DataType>
void HeapSort<DataType>::keepHeap(DataType d[], int heap_size, int k){
    int left = 2*k+1;
    int right = 2*k+2;
    int largest = k;
    if(left < heap_size && d[left] > d[k]){
        largest = left;
    }
    if(right < heap_size && d[right] > d[largest]){
        largest = right;
    }
    if(largest != k){
        SortBase<DataType>::swap(&d[k], &d[largest]);
        keepHeap(d, heap_size, largest);
    }
}

template <class DataType>
void HeapSort<DataType>::buildHeap(DataType d[], int heap_size){
    int i = heap_size/2-1;
    while (i >= 0){
        keepHeap(d, heap_size, i);
        i--;
    }
}