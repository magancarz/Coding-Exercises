#pragma once

#include <vector>

int Dominator(std::vector<int>& A)
{
    int stack_size = 0;
    int value;
    for (int i = 0; i < A.size(); ++i)
    {
        if (stack_size == 0)
        {
            value = A[i];
            ++stack_size;
        }
        else
        {
            if (value != A[i])
            {
                --stack_size;
            }
            else
            {
                ++stack_size;
            }
        }
    }

    int candidate = -1;
    if (stack_size > 0)
    {
        candidate = value;
    }

    int count = 0;
    int index = -1;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] == candidate)
        {
            ++count;
            index = i;
        }
    }

    if (count > A.size() / 2)
    {
        return index;
    }

    return -1;
}