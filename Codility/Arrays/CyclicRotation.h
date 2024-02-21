#pragma once

#include <vector>

std::vector<int> CyclicRotation(std::vector<int>& A, int K)
{
    if (A.empty()) return {};

    std::vector<int> result(A.size());
    int real_K = static_cast<size_t>(K) % A.size();
    memcpy(result.data(), A.data() + A.size() - real_K, sizeof(int) * real_K);
    memcpy(result.data() + real_K, A.data(), sizeof(int) * (A.size() - real_K));
    return result;
}
