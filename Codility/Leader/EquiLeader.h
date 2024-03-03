#pragma once

#include <vector>

int EquiLeader(std::vector<int>& A)
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

    int leader_count = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] == candidate)
        {
            ++leader_count;
        }
    }

    if (leader_count <= A.size() / 2)
    {
        return 0;
    }

    int equi_leader_count = 0;
    int result = 0;
    for (int i = 0; i < A.size() - 1; ++i)
    {
        if (A[i] == candidate)
        {
            ++equi_leader_count;
        }

        int leader_count_on_left_side = equi_leader_count;
        int left_array_size = i + 1;
        int leader_count_on_right_side = leader_count - equi_leader_count;
        if (leader_count_on_left_side > left_array_size / 2 && leader_count_on_right_side > (A.size() - left_array_size) / 2)
        {
            ++result;
        }
    }

    return result;
}