#pragma once

#include <vector>
#include <unordered_map>

int PermCheck(std::vector<int>& A)
{
    std::unordered_map<int, bool> occurrences;

    for (const auto& el : A)
    {
        if (el > A.size()) return -1;

        occurrences[el] = true;
    }

    for (int i = 1; i < A.size() + 1; ++i)
    {
        if (!occurrences[i])
        {
            return -1;
        }
    }

    return 1;
}