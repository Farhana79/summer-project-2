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

template <typename DataType>
class InsertionSort : public SortingAlgo<DataType> {
public:
    // Constructor
    InsertionSort(const bool& ascending);

    // Override sort function
    void sort(std::vector<DataType>& data) override;

    // Override clone function
    SortingAlgo<DataType>* clone() const override;
};

#include "InsertionSort.cpp"
#endif // INSERTION_SORT_HPP

