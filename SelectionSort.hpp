#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "SortingAlgo.hpp"

template <typename DataType>
class SelectionSort : public SortingAlgo<DataType> {
public:
    // Constructor
    SelectionSort(const bool& ascending);

    // Override sort function
    void sort(std::vector<DataType>& data) override;

    // Override clone function
    SortingAlgo<DataType>* clone() const override;

private:
    // Helper function to find the minimum or maximum element
    size_t findMinMax(const std::vector<DataType>& data, size_t start);
};

#include "SelectionSort.cpp"
#endif // SELECTION_SORT_HPP

