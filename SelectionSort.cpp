#include "SelectionSort.hpp"


template <class T>
size_t SelectionSort<T>::findMinMax(const std::vector<T>& list, size_t start) {
    // Initialize the index of the smallest or largest element as the starting index
    size_t minmax = start;
    // Loop through the elements in the list starting from the given start index
    for (size_t i = start; i < list.size(); i++) {
        // Increment the number of comparisons made by the algorithm
        this->comparisons_++;
        // Check if the element at current index 'i' is smaller or larger than the current smallest or largest
        if (this->comparator(list[i], list[minmax])) {
            // If it is smaller or larger, update the index of the smallest or largest element
            minmax = i;
        }
    }
    // Return the index of the smallest or largest element found
    return minmax;
}

template <class T>
SelectionSort<T>::SelectionSort(const bool& ascending)
        : SortingAlgo<T>("Selection Sort", false, ascending) {}

template <class T>
void SelectionSort<T>::sort(std::vector<T>& list) {
    size_t n = list.size();
    this->comparisons_ = 0;
    this->swaps_ = 0;

    for (size_t i = 0; i < n  && n != 0; ++i){
        // Get the member to be swapped in i th iteration
        size_t min_max_idx = findMinMax(list,i);

        if (min_max_idx != i){
            // swap the ith element with corresponding min/max element in the ith iteration
            std::swap(list[i], list[min_max_idx]);
            this->swaps_++;
        }
    }

}

