#pragma once

#include <vector>
#include <climits>

int MaxSliceSum(std::vector<int>& A)
{
    int32_t absolute_max = A[0];
    int32_t local_max = A[0];
    int32_t next_sum = 0;
    int32_t current_element = 0;

    for (int i = 1; i < A.size(); ++i)
    {
        current_element = A[i];
        next_sum = local_max + current_element;
        local_max = std::max(A[i], next_sum);
        absolute_max = std::max(absolute_max, local_max);
    }

    return absolute_max;
}