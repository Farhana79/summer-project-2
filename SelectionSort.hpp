#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

#include "SortingAlgo.hpp"



template <class T>
class SelectionSort : public SortingAlgo<T> {
public:

    /**
     * @brief Constructor for SelectionSort class
     *
     * @param ascending: boolean indicating the order of sorting
     */
    SelectionSort(const bool& ascending);

    /**
     * @brief function for sorting the list using Selection sort algorithm
     *
     * @param list: reference to a vector of type T
     *
     * @post: sort the list using Selection sort
     */
    void sort(std::vector<T>& list) override;
private:
    size_t findMinMax(const std::vector<T>& list,size_t start);
};

#include "SelectionSort.cpp"


#endif // SELECTION_SORT_HPP
