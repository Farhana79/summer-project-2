/**
 * @file QuickSort.hpp
 * @author
 * @brief This file is the interface for the QuickSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef TEST_QUICKSORT_HPP
#define TEST_QUICKSORT_HPP


#include "SortingAlgo.hpp"

template <class T>
class QuickSort : public SortingAlgo<T>{
public:
    /**
     * @brief Constructor for QuickSort class
     *
     * @param ascending: boolean indicating the order of sorting
     */
     
    QuickSort(const bool& ascending);

    /**
     * @brief function for sorting the list using QuickSort algorithm
     *
     * @param list: reference to a vector of type T
     *
     * @post: sort the list using QuickSort
     */
    void sort(std::vector<T>& list) override;
private:
    /**
     * @brief Recursively sorts the list using QuickSort algorithm
     *
     * @param list: reference to a vector of type T
     * @param low: starting index of the sublist
     * @param high: ending index of the sublist
     *
     * @post: sort the sublist from index low to high
     */
    void quickSort(std::vector<T>& list, int low, int high);

    /**
     * @brief Partitions the list into two halves
     *
     * @param list: reference to a vector of type T
     * @param low: starting index of the sublist
     * @param high: ending index of the sublist
     *
     * @return pivot index after partition
     */
    int partition(std::vector<T>& list, int low, int high);
};

#include "QuickSort.cpp"


#endif //TEST_QUICKSORT_HPP
