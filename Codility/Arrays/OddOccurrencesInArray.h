#pragma once

#include <vector>
#include <unordered_map>

int OddOccurrencesInArray(std::vector<int>& A)
{
    std::unordered_map<int, int> occurrences;
    for (const auto& el : A)
    {
        ++occurrences[el];
        if (occurrences[el] % 2 == 0)
        {
            occurrences.erase(el);
        }
    }

    for (const auto& [num, num_of_occurrences] : occurrences)
    {
        return num;
    }
}