#pragma once

#include <vector>
#include <climits>

int MaxProfit(std::vector<int>& A)
{
    int min_value = INT_MAX;
    int max_profit = 0;

    for (auto el : A)
    {
        min_value = std::min(min_value, el);
        max_profit = std::max(max_profit, el - min_value);
    }

    return max_profit;
}