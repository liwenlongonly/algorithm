//
// Created by ilong on 2020/3/1.
//

#ifndef ALGORITHM_BUCKETSORT_H
#define ALGORITHM_BUCKETSORT_H

#include "SortBase.h"

typedef struct entry{
    int element;
    struct entry *next;
}ENTRY;

typedef struct buc{
    int size;
    ENTRY *head;
}BUCKET;

//O(n) 桶排序
template <class DataType>
class BucketSort :public SortBase<DataType>{
public:

    virtual void sort(DataType d[], int n) override ;

private:
    int hashBucket(DataType data);
    void insertSort(BUCKET &bucket, const int& element);
    void createBucket(BUCKET *buckets, int n, DataType *data);
    void reverseEvaluation(BUCKET *buckets, DataType *data, int n);
    void bucketSort(DataType data[],int num);
};


#endif //ALGORITHM_BUCKETSORT_H
