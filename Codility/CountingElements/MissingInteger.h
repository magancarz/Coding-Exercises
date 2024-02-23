#pragma once

#include <vector>
#include <map>

int MissingInteger(std::vector<int>& A)
{
    std::map<int, bool> occurrences;

    int next_missing_integer = 1;
    for (int i = 0; i < A.size(); ++i)
    {
        occurrences[A[i]] = true;

        while (occurrences[next_missing_integer])
        {
            ++next_missing_integer;
        }
    }

    return next_missing_integer;
}