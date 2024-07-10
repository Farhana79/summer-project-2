/**
 * @file QuickSort.hpp
 * @author
 * @brief This file is the interface for the QuickSort class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include "SortingAlgo.hpp"

template <typename DataType>
class QuickSort : public SortingAlgo<DataType> {
public:
    // Constructor
    QuickSort(const bool& ascending);

    // Override sort function
    void sort(std::vector<DataType>& data) override;

    // Override clone function
    SortingAlgo<DataType>* clone() const override;

private:
    void quickSort(std::vector<DataType>& data, int low, int high);
    int partition(std::vector<DataType>& data, int low, int high);
};

#include "QuickSort.cpp"
#endif // QUICK_SORT_HPP
