/**
 * @file InsertionSort.cpp
 * @author
 * @brief This file for the InsertionSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "InsertionSort.hpp"

// Constructor
template <typename DataType>
InsertionSort<DataType>::InsertionSort(const bool& ascending)
    : SortingAlgo<DataType>(ascending) {}

// Function to sort the data using insertion sort
template <typename DataType>
void InsertionSort<DataType>::sort(std::vector<DataType>& data) {
    this->swaps = 0;
    this->comparisons = 0;
    
    for (size_t i = 1; i < data.size(); ++i) {
        DataType key = data[i];
        size_t j = i;
        while (j > 0 && this->comparator(key, data[j - 1])) {
            data[j] = data[j - 1];
            ++this->swaps;
            --j;
        }
        data[j] = key;
        if (j != i) {
            ++this->swaps;
        }
    }
}

// Function to clone the object
template <typename DataType>
SortingAlgo<DataType>* InsertionSort<DataType>::clone() const {
    return new InsertionSort<DataType>(*this);
}

