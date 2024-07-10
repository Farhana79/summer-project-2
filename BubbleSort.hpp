/**
 * @file BubbleSort.hpp
 * @Farhana Sultana (farhana.sultana79@myhunter.cuny.edu)
 * @brief This file is the interface for the BubbleSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */


#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include "SortingAlgo.hpp"
#include <vector>

template <class T>
class BubbleSort : public SortingAlgo<T> {
public:
    /**
     * @brief Constructor for BubbleSort class
     *
     * @param ascending: boolean indicating the order of sorting
     */
    BubbleSort(const bool& ascending);

    /**
     * @brief function for sorting the list using BubbleSort algorithm
     *
     * @param list: reference to a vector of type T
     *
     * @post: sort the list using BubbleSort
     */
    void sort(std::vector<T>& list) override;
};

#include "BubbleSort.cpp"
#endif // BUBBLE_SORT_HPP

