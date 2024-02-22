#pragma once

#include <vector>

int PermMissingElem(std::vector<int>& A)
{
    size_t n_plus_one = A.size() + 1;
    uint64_t sum = (1 + n_plus_one) * n_plus_one / 2;

    uint64_t actual_sum = 0;
    for (const auto& el : A)
    {
        actual_sum += el;
    }

    return static_cast<int>(sum - actual_sum);
}