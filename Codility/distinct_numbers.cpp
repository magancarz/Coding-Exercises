#include <unordered_map>

int distinct_numbers(std::vector<int> &A) {
    std::unordered_map<int, int> distinct_numbers;

    for(auto& i : A) {
        ++distinct_numbers[i];
    }

    return distinct_numbers.size();
}