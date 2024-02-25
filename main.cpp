#include <iostream>

#include "PrefixSums/GenomicRangeQuery.h"

int main()
{
    std::string S = "CAGCCTA";
    std::vector<int> A = {2, 5, 0};
    std::vector<int> B = {4, 5, 6};
    auto test = GenomicRangeQuery(S, A, B);

    return 0;
}
