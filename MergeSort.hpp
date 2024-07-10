#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include "SortingAlgo.hpp"

template <typename DataType>
class MergeSort : public SortingAlgo<DataType> {
public:
    // Constructor
    MergeSort(const bool& ascending);

    // Override sort function
    void sort(std::vector<DataType>& data) override;

    // Override clone function
    SortingAlgo<DataType>* clone() const override;

private:
    void mergeSort(std::vector<DataType>& data, int left, int right);
    void merge(std::vector<DataType>& data, int left, int mid, int right);
};

#include "MergeSort.cpp"
#endif // MERGE_SORT_HPP
