#pragma once

#include <cmath>
#include <climits>

int MinPerimeterTriangle(int N)
{
    int i = 1;
    int min_perimeter = INT_MAX;
    while (i * i < N)
    {
        if (N % i == 0)
        {
            min_perimeter = std::fmin(min_perimeter, 2 * i + 2 * (N / i));
        }

        ++i;
    }

    if (i * i == N)
    {
        min_perimeter = std::fmin(min_perimeter, 2 * i + 2 * (N / i));
    }

    return min_perimeter;
}