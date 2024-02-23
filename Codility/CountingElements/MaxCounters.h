#pragma once

#include <vector>

std::vector<int> MaxCounters(int N, std::vector<int>& A)
{
    std::vector<int> counts(N);
    int largest_value = 0;
    int last_max_counter_value = 0;
    for (const auto& el : A)
    {
        int index = el - 1;
        if (index == N)
        {
            last_max_counter_value = largest_value;
        }
        else
        {
            counts[index] = std::max(counts[index], last_max_counter_value);
            ++counts[index];
            largest_value = std::max(counts[index], largest_value);
        }
    }

    for (auto& el : counts)
    {
        el = std::max(el, last_max_counter_value);
    }

    return counts;
}