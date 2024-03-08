#pragma once

#include <vector>
#include <climits>

int MaxDoubleSliceSum(std::vector<int>& A)
{
    std::vector<int> k_1(A.size());
    for (int i = 1; i < A.size() - 1; ++i)
    {
        k_1[i] = std::max(k_1[i - 1] + A[i], 0);
    }

    std::vector<int> k_2(A.size());
    for (int i = A.size() - 2; i > 0; --i)
    {
        k_2[i] = std::max(k_2[i + 1] + A[i], 0);
    }

    int result = INT_MIN;
    for (int i = 1; i < A.size() - 1; ++i)
    {
        result = std::max(k_1[i - 1] + k_2[i + 1], result);
    }

    return result;
}