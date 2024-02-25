#pragma once

#include <vector>

int PassingCars(std::vector<int>& A)
{
    if (A.size() > 1000000000) return -1;

    int number_of_zeroes = 0;
    int number_of_passing_cars = 0;
    for (const auto& el : A)
    {
        if (el == 0)
        {
            ++number_of_zeroes;
        }
        else
        {
            number_of_passing_cars += number_of_zeroes;
        }
    }

    return number_of_passing_cars;
}