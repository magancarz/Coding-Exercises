#pragma once

#include <vector>

int TapeEquilibrium(std::vector<int>& A)
{
    uint64_t total_sum = 0;
    for (const auto& el : A)
    {
        total_sum += el;
    }

    uint64_t minimal_sum = UINT64_MAX;
    uint64_t partial_sum = 0;
    for (int i = 0; i < A.size() - 1; ++i)
    {
        partial_sum += A[i];
        uint64_t abs_val = std::abs(static_cast<long long>((total_sum - partial_sum) - partial_sum));
        minimal_sum = std::min(minimal_sum, abs_val);
    }

    return minimal_sum;
}
