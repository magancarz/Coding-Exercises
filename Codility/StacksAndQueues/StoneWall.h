#pragma once

#include <vector>

int StoneWall(std::vector<int>& H)
{
    int block_count = 0;
    std::vector<int> active_builders;
    for (auto height : H)
    {
        if (active_builders.empty())
        {
            active_builders.push_back(height);
        }
        else
        {
            int highest = 0;
            for (int i = active_builders.size() - 1; i >= 0; --i)
            {
                int block_height = active_builders[i];
                if (block_height > height)
                {
                    active_builders.erase(active_builders.begin() + i);
                    ++block_count;
                    continue;
                }

                highest = std::max(highest, block_height);

                if (block_height < height)
                {
                    break;
                }
            }

            if (highest != height)
            {
                active_builders.push_back(height);
            }
        }
    }

    return block_count + active_builders.size();
}