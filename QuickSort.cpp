/**
 * @file QuickSort.cpp
 * @author
 * @brief This file for the QuickSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "QuickSort.hpp"

// Constructor
template <typename DataType>
QuickSort<DataType>::QuickSort(const bool& ascending)
    : SortingAlgo<DataType>(ascending) {}

// Function to sort the data using quick sort
template <typename DataType>
void QuickSort<DataType>::sort(std::vector<DataType>& data) {
    this->swaps = 0;
    this->comparisons = 0;
    quickSort(data, 0, data.size() - 1);
}

// Recursive function to implement quick sort
template <typename DataType>
void QuickSort<DataType>::quickSort(std::vector<DataType>& data, int low, int high) {
    if (low < high) {
        int pi = partition(data, low, high);
        quickSort(data, low, pi - 1);
        quickSort(data, pi + 1, high);
    }
}

// Function to partition the array
template <typename DataType>
int QuickSort<DataType>::partition(std::vector<DataType>& data, int low, int high) {
    DataType pivot = data[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (this->comparator(data[j], pivot)) {
            ++i;
            std::swap(data[i], data[j]);
            ++this->swaps;
        }
        ++this->comparisons;
    }
    std::swap(data[i + 1], data[high]);
    ++this->swaps;
    return i + 1;
}

// Function to clone the object
template <typename DataType>
SortingAlgo<DataType>* QuickSort<DataType>::clone() const {
    return new QuickSort<DataType>(*this);
}

