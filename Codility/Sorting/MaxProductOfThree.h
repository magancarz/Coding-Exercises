#pragma once

#include <vector>
#include <limits>

int MaxProductOfThree(std::vector<int>& A)
{
    int first, second, third;
    first = second = third = std::numeric_limits<int>::min();
    int min_first, min_second;
    min_first = min_second = 0;
    for (const auto el : A)
    {
        if (el > first)
        {
            third = second;
            second = first;
            first = el;
        }
        else if (el > second)
        {
            third = second;
            second = el;
        }
        else if (el > third)
        {
            third = el;
        }

        if (el < min_first)
        {
            min_second = min_first;
            min_first = el;
        }
        else if (el < min_second)
        {
            min_second = el;
        }
    }

    int first_result = first * second * third;
    int second_result = first * min_first * min_second;
    return std::max(first_result, second_result);
}