/**
 * @file BubbleSort.hpp
 * @author
 * @brief This file is the interface for the BubbleSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "SortingAlgo.hpp"

template <typename DataType>
class BubbleSort : public SortingAlgo<DataType> {
public:
    // Constructor
    BubbleSort(const bool& ascending);

    // Override sort function
    void sort(std::vector<DataType>& data) override;

    // Override clone function
    SortingAlgo<DataType>* clone() const override;
};

#include "BubbleSort.cpp"
#endif // BUBBLE_SORT_HPP
