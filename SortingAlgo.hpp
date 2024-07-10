/**
 * @file SortingAlgo.hpp
 * @author
 * @brief This file is the interface for the SortAlgo class
 * @date 2024-06-30
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef SORTING_ALGO_HPP
#define SORTING_ALGO_HPP

#include <vector>

template <typename DataType>
class SortingAlgo {
protected:
    int swaps;          ///< Number of swaps made during sorting
    int comparisons;    ///< Number of comparisons made during sorting
    bool ascending;     ///< Sorting order

    /**
     * @brief : Comparator function to compare two elements
     * @param : const DataType& a - first element
     * @param : const DataType& b - second element
     * @return : true if a < b in ascending order or a > b in descending order
     */
    bool comparator(const DataType& a, const DataType& b);

public:
    // Constructor
    SortingAlgo(const bool& ascending);

    // Virtual destructor
    virtual ~SortingAlgo() = default;

    // Pure virtual function for sorting
    virtual void sort(std::vector<DataType>& data) = 0;

    // Virtual function to clone the derived class object
    virtual SortingAlgo<DataType>* clone() const = 0;

    // Function to set the sorting order
    void setOrder(const bool& order);

    // Utility functions
    int getSwaps() const;
    int getComparisons() const;
    bool isSorted(const std::vector<DataType>& data) const;
};

#include "SortingAlgo.cpp"
#endif // SORTING_ALGO_HPP

