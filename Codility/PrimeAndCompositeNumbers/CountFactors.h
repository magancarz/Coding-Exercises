#pragma once

#include <cmath>

int CountFactors(int N)
{
    int number_of_factors = 0;
    int i = 1;
    while (i * i < sqrt(N))
    {
        if (N % i == 0)
        {
            number_of_factors += 2;
        }

        ++i;
    }

    if (i * i == N)
    {
        ++number_of_factors;
    }

    return number_of_factors;
}