#pragma once

#include <vector>
#include <algorithm>

int Triangle(std::vector<int>& A)
{
    std::sort(A.begin(), A.end());
    for (int i = A.size() - 1; i >= 2; --i)
    {
        int64_t first = A[i - 2];
        int64_t second = A[i - 1];
        int64_t third = A[i];
        if (first + second > third &&
            second + third > first &&
            first + third > second)
        {
            return 1;
        }
    }

    return 0;
}