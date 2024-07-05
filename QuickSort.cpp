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


template <class T>
int QuickSort<T>::partition(std::vector<T>& list, int low, int high){
    // Choose the pivot element as the last element in the list
    T pivot = list[high];
    // Initialize index i to the lower bound of the partition
    int i = low - 1;
    // Loop through elements from low to high-1
    for (int j = low; j <= high - 1; j++){
        // Compare current element with the pivot using a comparator function
        if (this -> comparator(list[j], pivot)){
            i++;
            // Swap elements at indices i and j and increment swap counter
            std::swap(list[i], list[j]);
            this -> swaps_++;
        }
        // Increment comparison counter
        this -> comparisons_++;
    }
    // Swap pivot element with element at index i+1 and increment swap counter
    std::swap(list[i + 1], list[high]);
    this -> swaps_++;
    // Return the index of the pivot element
    return i + 1;
}

template <class T>
QuickSort<T>::QuickSort(const bool& ascending)
        : SortingAlgo<T>("Quick Sort", false, ascending) {};

template <class T>
void QuickSort<T>::sort(std::vector<T>& list) {
    this->comparisons_ =0;
    this->swaps_ = 0;
    // Call quickSort function to sort the entire list
    quickSort(list, 0, list.size() - 1);
}

template <class T>
void QuickSort<T>::quickSort(std::vector<T>& list, int low, int high) {
    // Base case: if the sublist has 1 or no elements, it is already sorted
    if (low < high) {
        // Partition the list and get the pivot index
        int pivotIndex = partition(list, low, high);

        // Recursively sort the left and right halves
        quickSort(list, low, pivotIndex - 1);
        quickSort(list, pivotIndex + 1, high);
    }
}