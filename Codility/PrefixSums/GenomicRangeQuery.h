#pragma once

#include <vector>
#include <string>
#include <map>
#include <limits>

std::vector<int> GenomicRangeQuery(std::string& S, std::vector<int>& P, std::vector<int>& Q)
{
    std::map<char, int> genome_map = {{'A', 1}, {'C', 2}, {'G', 3}, {'T', 4}};
    std::map<char, std::vector<int>> prefix =
    {
        {'A', std::vector<int>(S.size() + 1)},
        {'C', std::vector<int>(S.size() + 1)},
        {'G', std::vector<int>(S.size() + 1)},
        {'T', std::vector<int>(S.size() + 1)}
    };

    for (int i = 0; i < S.size(); ++i)
    {
        for (auto& prefix_vec : prefix)
        {
            if (S[i] == prefix_vec.first)
            {
                prefix_vec.second[i + 1] = prefix_vec.second[i] + 1;
            }
            else
            {
                prefix_vec.second[i + 1] = prefix_vec.second[i];
            }
        }
    }

    std::vector<int> result(P.size());
    for (int i = 0; i < P.size(); ++i)
    {
        if (P[i] == Q[i])
        {
            result[i] = genome_map[S[P[i]]];
            continue;
        }

        for (auto& prefix_vec : prefix)
        {
            if (prefix_vec.second[P[i]] < prefix_vec.second[Q[i] + 1])
            {
                result[i] = genome_map[prefix_vec.first];
                break;
            }
        }
    }

    return result;
}