#include "duplicates_in_array.h"

#include <iostream>

void find_duplicates(std::vector<int> arr) {
	size_t i = 0;
	while(i < arr.size()) {
		if(arr[i] <= 0) {
			++i;
			continue;
		}

		const int element_index = arr[i] - 1;

		if(arr[element_index] > 0) {
			arr[i] = arr[element_index];

			arr[element_index] = -1;
		} else {
			--arr[element_index];

			arr[i] = 0;
			++i;
		}
	}

	std::cout << "Counts of elements:\n";
	for(auto i : arr) {
		printf("%d -> %d\n", i+1, std::abs(arr[i]));
	}
}
