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

template <class T>
bool SortingAlgo<T>::comparator(const T& a, const T& b) const {
    return ascending_ ? a < b : a > b;
}

template <class T>
SortingAlgo<T>::SortingAlgo(const std::string& name, const bool& stable, const bool& ascending)
        : name_(name), swaps_(0), comparisons_(0), stable_(stable), ascending_(ascending) {};

template <class T>
void SortingAlgo<T>::setName(const std::string& name) {
    name_ = name;
}

template <class T>
void SortingAlgo<T>::setStable(const bool& stable) {
    stable_ = stable;
}

template <class T>
void SortingAlgo<T>::setAscending(const bool& ascending) {
    ascending_ = ascending;
}

template <class T>
std::string SortingAlgo<T>::getName() const {
    return name_;
}

template <class T>
bool SortingAlgo<T>::isStable() const {
    return stable_;
}

template <class T>
size_t SortingAlgo<T>::getSwaps() const {
    return swaps_;
}

template <class T>
size_t SortingAlgo<T>::getComparisons() const {
    return comparisons_;
}

template <class T>
bool SortingAlgo<T>::isAscending() const {
    return ascending_;
}

template <class T>
bool SortingAlgo<T>::isSorted(std::vector<T>& list) const {
    if (list.empty()) return true;
    for (size_t i = 1; i < list.size(); ++i) {
        if (ascending_) {
            if (list[i-1] > list[i]) return false;
        } else {
            if (list[i-1] < list[i]) return false;
        }
    }
    return true;
}


