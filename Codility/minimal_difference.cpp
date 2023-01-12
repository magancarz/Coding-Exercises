#include <vector>

#define INT_MAX 2147483647

int minimal_difference(std::vector<int> &A) {
    int sum_of_array = 0;
    for(auto& i : A)
        sum_of_array += i;

    int minimal_difference = INT_MAX,
        current_sum = 0;
    
    for(unsigned int i = 0; i < A.size() - 1; ++i) {
        current_sum += A[i];
        sum_of_array -= A[i];
        if(abs(current_sum - sum_of_array) < minimal_difference)
            minimal_difference = abs(current_sum - sum_of_array);
    }

    return minimal_difference;
}