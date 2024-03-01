#pragma once

#include <vector>

int solution(std::vector<int>& A, std::vector<int>& B)
{
    std::vector<int> fish;
    int fish_alive = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (B[i] == 1)
        {
            fish.push_back(A[i]);
        }
        else if (!fish.empty())
        {
            ++fish_alive;
            for (int j = fish.size() - 1; j >= 0; --j)
            {
                if (fish[j] < A[i])
                {
                    fish.pop_back();
                }
                else
                {
                    --fish_alive;
                    break;
                }
            }
        }
        else
        {
            ++fish_alive;
        }
    }

    return fish.size() + fish_alive;
}