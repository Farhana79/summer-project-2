/**
 * @file SortingAlgo.cpp
 * @author
 * @brief This file is the for the SortAlgo class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "SortingAlgo.hpp"

// Constructor
template <typename DataType>
SortingAlgo<DataType>::SortingAlgo(const bool& ascending)
    : swaps(0), comparisons(0), ascending(ascending) {}

// Comparator function implementation
template <typename DataType>
bool SortingAlgo<DataType>::comparator(const DataType& a, const DataType& b) {
    ++comparisons;
    return ascending ? a < b : a > b;
}

// Function to set the sorting order
template <typename DataType>
void SortingAlgo<DataType>::setOrder(const bool& order) {
    ascending = order;
}

// Function to get the number of swaps
template <typename DataType>
int SortingAlgo<DataType>::getSwaps() const {
    return swaps;
}

// Function to get the number of comparisons
template <typename DataType>
int SortingAlgo<DataType>::getComparisons() const {
    return comparisons;
}

// Function to check if the data is sorted
template <typename DataType>
bool SortingAlgo<DataType>::isSorted(const std::vector<DataType>& data) const {
    for (size_t i = 1; i < data.size(); ++i) {
        if (!comparator(data[i - 1], data[i])) {
            return false;
        }
    }
    return true;
}


