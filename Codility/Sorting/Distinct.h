#pragma once

#include <vector>
#include <unordered_map>

int Distinct(std::vector<int>& A)
{
    std::unordered_map<int, bool> occurrences;
    for (const auto el : A)
    {
        occurrences[el] = true;
    }

    return occurrences.size();
}