#include "merge_sort.h"

#include <iostream>

void merge(int arr[], const int left, const int mid, const int right) {
	const auto sub_array_one = mid - left + 1;
	const auto sub_array_two = right - mid;

	auto left_array = new int[sub_array_one],
		 right_array = new int[sub_array_two];

	for(auto i = 0; i < sub_array_one; i++) {
		left_array[i] = arr[left + i];
	}
	for(auto i = 0; i < sub_array_two; i++) {
		right_array[i] = arr[mid + 1 + i];
	}

	auto index_of_sub_array_one = 0,
		 index_of_sub_array_two = 0;

	int index_of_merged_array = left;

	while (index_of_sub_array_one < sub_array_one
           && index_of_sub_array_two < sub_array_two) {
        if (left_array[index_of_sub_array_one]
            <= right_array[index_of_sub_array_two]) {
            arr[index_of_merged_array]
                = left_array[index_of_sub_array_one];
            index_of_sub_array_one++;
        }
        else {
            arr[index_of_merged_array]
                = right_array[index_of_sub_array_two];
            index_of_sub_array_two++;
        }
        index_of_merged_array++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (index_of_sub_array_one < sub_array_one) {
        arr[index_of_merged_array]
            = left_array[index_of_sub_array_one];
        index_of_sub_array_one++;
        index_of_merged_array++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (index_of_sub_array_two < sub_array_two) {
	    arr[index_of_merged_array]
            = right_array[index_of_sub_array_two];
        index_of_sub_array_two++;
        index_of_merged_array++;
    }
    delete[] left_array;
    delete[] right_array;
}

void merge_sort(int arr[], const int begin, const int end) {
	if(begin >= end)
		return;

	auto mid = begin + (end - begin) / 2;
	merge_sort(arr, begin, mid);
	merge_sort(arr, mid + 1, end);
	merge(arr, begin, mid, end);
}

void print_array(int arr[], int size) {
	for(int i = 0; i < size; ++i) {
		std::cout << arr[i] << std::endl;
	}
}