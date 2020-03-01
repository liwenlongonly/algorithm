//
// Created by ilong on 2020/3/1.
//

#include "BucketSort.h"

template <class DataType>
void BucketSort<DataType>::sort(DataType d[], int n) {
    bucketSort(d, n);
}

template <class DataType>
void BucketSort<DataType>::bucketSort(DataType data[], int num){
    BUCKET *buckets = (BUCKET*)malloc(sizeof(BUCKET)*11);
    for (int i = 0; i < 11; i ++)
    {
        buckets[i].size = 0;
        buckets[i].head = NULL;
    }
    createBucket(buckets,num,data);
    reverseEvaluation(buckets,data,11);
    free(buckets);
}

template <class DataType>
int BucketSort<DataType>::hashBucket(DataType data){
    return data/10;
}

template <class DataType>
void BucketSort<DataType>::insertSort(BUCKET &bucket, const int& element){
    ENTRY* tmp = bucket.head;
    ENTRY *en = (ENTRY*)malloc(sizeof(ENTRY));
    en->element = element;
    en->next = NULL;
    if ((tmp == NULL)||(tmp->element > en->element))
    {
        en->next = tmp;
        bucket.head = en;
        bucket.size ++;
    }
    else
    {
        while (tmp != NULL)
        {
            if ((tmp->next == NULL &&tmp->element <= en->element )|| (tmp->element <= en->element && tmp->next->element > en->element) )
            {
                en->next = tmp->next;
                tmp->next = en;
                bucket.size ++;
                break;
            }
            tmp = tmp->next;
        }
    }
}

template <class DataType>
void BucketSort<DataType>::createBucket(BUCKET *buckets, int n, DataType *data){
    for (int i = 0; i < n; i ++)
    {
        int num = hashBucket(data[i]);
        insertSort(buckets[num], data[i]);
    }
}

template <class DataType>
void BucketSort<DataType>::reverseEvaluation(BUCKET *buckets, DataType *data,int n){
    int idx = 0;
    for (int i = 0;i < n;i ++)
    {
        if (buckets[i].size != 0)
        {
            ENTRY *en = buckets[i].head;
            while(en != NULL)
            {
                data[idx++] = en->element;
                en = en->next;
            }
        }
    }
}