/**
 * @file BubbleSort.cpp
 * @author
 * @brief This file for the BubbleSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "BubbleSort.hpp"

// Constructor
template <typename DataType>
BubbleSort<DataType>::BubbleSort(const bool& ascending)
    : SortingAlgo<DataType>(ascending) {}

// Function to sort the data using bubble sort
template <typename DataType>
void BubbleSort<DataType>::sort(std::vector<DataType>& data) {
    this->swaps = 0;
    this->comparisons = 0;
    
    bool swapped;
    for (size_t i = 0; i < data.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < data.size() - i - 1; ++j) {
            if (this->comparator(data[j + 1], data[j])) {
                std::swap(data[j], data[j + 1]);
                ++this->swaps;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

// Function to clone the object
template <typename DataType>
SortingAlgo<DataType>* BubbleSort<DataType>::clone() const {
    return new BubbleSort<DataType>(*this);
}
