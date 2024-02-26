#pragma once

#include <vector>
#include <limits>

int MinAvgTwoSlice(std::vector<int>& A)
{
    float minimum_slice = std::numeric_limits<float>::max();
    int starting_index = std::numeric_limits<int>::max();
    for (int i = 0; i < A.size() - 2; ++i)
    {
        float two_slice_avg = static_cast<float>(A[i] + A[i + 1]) / 2;
        float three_slice_avg = static_cast<float>(A[i] + A[i + 1] + A[i + 2]) / 3;
        if (two_slice_avg < minimum_slice || three_slice_avg < minimum_slice)
        {
            starting_index = i;
            minimum_slice = std::min(two_slice_avg, three_slice_avg);
        }
    }

    float two_slice_avg = static_cast<float>(A[A.size() - 2] + A[A.size() - 1]) / 2;
    if (two_slice_avg < minimum_slice)
    {
        starting_index = A.size() - 2;
    }

    return starting_index;
}