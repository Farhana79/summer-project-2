/**
 * @file InsertionSort.hpp
 * @author
 * @brief This file is the interface for the InsertionSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include "SortingAlgo.hpp"
#include <vector>

template <class T>
class InsertionSort : public SortingAlgo<T> {
public:
    /**
     * @brief Constructor for InsertionSort class
     *
     * @param ascending: boolean indicating the order of sorting
     */
    InsertionSort(const bool& ascending);

    /**
     * @brief function for sorting the list using InsertionSort algorithm
     *
     * @param list: reference to a vector of type T
     *
     * @post: sort the list using InsertionSort
     */
    void sort(std::vector<T>& list) override;
};

#include "InsertionSort.cpp"
#endif // INSERTION_SORT_HPP

