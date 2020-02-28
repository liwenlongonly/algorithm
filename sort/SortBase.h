//
// Created by ilong on 2020/2/28.
//

#ifndef ALGORITHM_SORTBASE_H
#define ALGORITHM_SORTBASE_H

#include <iostream>
#include <functional>

template <class DataType>
class SortBase {
public:
    virtual ~SortBase(){}

    virtual void test(DataType d[], int n){
        SortBase<DataType>::test(d, n, [this](DataType d[], int n){
            this->sort(d, n);
        });
    }

    virtual void sort(DataType d[], int n) = 0;

    void swap(DataType *a, DataType *b){
        DataType temp = *a;
        *a = *b;
        *b = temp;
    }

private:
    void test(DataType d[], int n, std::function<void(DataType d[], int n)> active){
        std::cout << "The original array is: " << std::endl;
        for (int i = 0; i < n; i++) {
            std::cout << d[i] <<" ";
        }
        std::cout << std::endl;
        active(d, n);
        std::cout << "The result array is: " << std::endl;
        for (int i = 0; i < n; i++) {
            std::cout << d[i] <<" ";
        }
        std::cout << std::endl;
    }
};

#endif //ALGORITHM_SORTBASE_H
