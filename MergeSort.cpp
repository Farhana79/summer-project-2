/**
 * @file MergeSort.cpp
 * @author
 * @brief This file for the MergeSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "MergeSort.hpp"

// Constructor
template <typename DataType>
MergeSort<DataType>::MergeSort(const bool& ascending)
    : SortingAlgo<DataType>(ascending) {}

// Function to sort the data using merge sort
template <typename DataType>
void MergeSort<DataType>::sort(std::vector<DataType>& data) {
    this->swaps = 0;
    this->comparisons = 0;
    mergeSort(data, 0, data.size() - 1);
}

// Recursive function to implement merge sort
template <typename DataType>
void MergeSort<DataType>::mergeSort(std::vector<DataType>& data, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

// Function to merge two halves
template <typename DataType>
void MergeSort<DataType>::merge(std::vector<DataType>& data, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<DataType> leftArr(n1);
    std::vector<DataType> rightArr(n2);

    for (int i = 0; i < n1; ++i)
        leftArr[i] = data[left + i];
    for (int i = 0; i < n2; ++i)
        rightArr[i] = data[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (this->comparator(leftArr[i], rightArr[j])) {
            data[k] = leftArr[i];
            ++i;
        } else {
            data[k] = rightArr[j];
            ++j;
        }
        ++k;
        ++this->comparisons;
    }

    while (i < n1) {
        data[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        data[k] = rightArr[j];
        ++j;
        ++k;
    }
}

// Function to clone the object
template <typename DataType>
SortingAlgo<DataType>* MergeSort<DataType>::clone() const {
    return new MergeSort<DataType>(*this);
}
