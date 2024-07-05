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

template <class T>
InsertionSort<T>::InsertionSort(const bool& ascending)
        : SortingAlgo<T>("Insertion Sort", true, ascending) {}

template <class T>
void InsertionSort<T>::sort(std::vector<T>& list) {
    //Resetting
    this->comparisons_=0;
    this->swaps_ = 0;

    // Insertion Sort algorithm
    for (size_t i = 1; i < list.size(); i++) {
        T key = list[i];
        int j = i - 1;
        bool isSwapped = false;
        // Move elements of list[0..i-1], that are greater than key,to one position ahead of their current position
        while (j >= 0 && !this->comparator(list[j], key) && list[j] != key) {
            list[j + 1] = list[j];
            j--;
            this->swaps_++;
            this->comparisons_++;
            isSwapped = true;
        }
        list[j + 1] = key;
        // Increment comparisons for the last comparison in while loop
        if (j >= 0 || isSwapped) {
            this->comparisons_++;
        }
    }
}
