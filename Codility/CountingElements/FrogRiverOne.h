#pragma once

#include <vector>
#include <map>

int FrogRiverOne(int X, std::vector<int>& A)
{
    std::map<int, bool> leaves;

    int next_missing_leaf = 1;
    for (int i = 0; i < A.size(); ++i)
    {
        leaves[A[i]] = true;

        while (leaves[next_missing_leaf])
        {
            ++next_missing_leaf;
        }

        if (next_missing_leaf > X)
        {
            return i;
        }
    }

    return -1;
}