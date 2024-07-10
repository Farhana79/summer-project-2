#include "SelectionSort.hpp"

// Constructor
template <typename DataType>
SelectionSort<DataType>::SelectionSort(const bool& ascending)
    : SortingAlgo<DataType>(ascending) {}

// Function to sort the data using selection sort
template <typename DataType>
void SelectionSort<DataType>::sort(std::vector<DataType>& data) {
    this->swaps = 0;
    this->comparisons = 0;

    for (size_t i = 0; i < data.size() - 1; ++i) {
        size_t minMaxIndex = findMinMax(data, i);
        if (i != minMaxIndex) {
            std::swap(data[i], data[minMaxIndex]);
            ++this->swaps;
        }
    }
}

// Function to find the minimum or maximum element from a given start index
template <typename DataType>
size_t SelectionSort<DataType>::findMinMax(const std::vector<DataType>& data, size_t start) {
    size_t minMaxIndex = start;
    for (size_t i = start + 1; i < data.size(); ++i) {
        if (this->comparator(data[i], data[minMaxIndex])) {
            minMaxIndex = i;
        }
    }
    return minMaxIndex;
}

// Function to clone the object
template <typename DataType>
SortingAlgo<DataType>* SelectionSort<DataType>::clone() const {
    return new SelectionSort<DataType>(*this);
}
