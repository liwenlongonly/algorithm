#include <iostream>
#include "sort/InsertSort.cpp"
#include "sort/BubbleSort.cpp"
#include "sort/QuickSort.cpp"
#include "sort/MergeSort.cpp"

int main() {
    const int data_len = 10;
    int data1[data_len] = {0, 43, 35, 87, 1, 87, 99, 67, 78, 100};
    std::cout << "Insert Sort satrt!" << std::endl;
    InsertSort<int> insertSort;
    insertSort.test(data1, data_len);

    float data2[data_len] = {0.2, 43.5, 35.3, 35.4, 1.9, 87.0, 99.9, 67.5, 78.8, 100.1};
    std::cout << "Bubble Sort satrt!" << std::endl;
    BubbleSort<float> bubbleSort;
    bubbleSort.test(data2, data_len);

    double data3[data_len] = {0.2, 43.5, 35.3, 35.4, 1.9, 87.0, 99.9, 67.5, 78.8, 100.1};
    std::cout << "Quick Sort satrt!" << std::endl;
    QuickSort<double> quickSort;
    quickSort.test(data3, data_len);

    double data4[data_len] = {0.2, 43.5, 35.3, 35.4, 1.9, 87.0, 99.9, 67.5, 78.8, 100.1};
    std::cout << "Merge Sort satrt!" << std::endl;
    MergeSort<double > mergeSort;
    mergeSort.test(data4, data_len);

    return 0;
}
