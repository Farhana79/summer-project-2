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

template <class T>
BubbleSort<T>::BubbleSort(const bool& ascending)
        : SortingAlgo<T>("Bubble Sort", true, ascending) {}

template <class T>
void BubbleSort<T>::sort(std::vector<T>& list) {
    //resetting
    this->comparisons_ =0;
    this->swaps_ = 0;
    // Bubble Sort algorithm
    bool swapped;
    for (size_t i = 0; i < list.size() - 1 && !list.empty(); i++) {
        swapped = false;
        for (size_t j = 0; j < list.size() - i - 1; j++) {
            // Compare adjacent elements using comparator
            if (!this->comparator(list[j], list[j + 1]) && list[j] != list[j+1]) {
                // Swap elements if they are in the wrong order
                std::swap(list[j], list[j + 1]);
                this->swaps_++;
                swapped = true;
            }
            this->comparisons_++;
        }
        // If no two elements were swapped in the inner loop, then break
        if (!swapped) {
            break;
        }
    }
}
