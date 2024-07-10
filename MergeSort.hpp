/**
 * @file MergeSort.cpp
 * @Farhana Sultana (farhana.sultana79@myhunter.cuny.edu)
 * @brief This file for the MergeSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef TEST_MERGESORT_HPP
#define TEST_MERGESORT_HPP


#include "SortingAlgo.hpp"


template <class T>
class MergeSort : public SortingAlgo<T> {
public:
    /**
     * @brief Constructor for MergeSort class
     *
     * @param ascending: boolean indicating the order of sorting
     */
    MergeSort(const bool& ascending);

    /**
     * @brief function for sorting the list using MergeSort algorithm
     *
     * @param list: reference to a vector of type T
     *
     * @post: sort the list using MergeSort
     */
    void sort(std::vector<T>& list) override;
private:
    /**
     *
     * @brief Merges two sorted vectors into one sorted vector
     *
     * @param left: reference to the left vector
     * @param right: reference to the right vector
     *
     * @return merged and sorted vector
    */
    std::vector<T> merge(std::vector<T>& left, std::vector<T>& right);

    /**
     * @brief Recursively splits and merges the list to sort it
     *
     * @param list: reference to a vector of type T
     *
     * @return sorted vector
     */
    std::vector<T> mergeSort(std::vector<T>& list);
};

#include "MergeSort.cpp"


#endif //TEST_MERGESORT_HPP
