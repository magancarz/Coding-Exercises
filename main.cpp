#include <iostream>

#include "PrefixSums/GenomicRangeQuery.h"
#include "PrefixSums/MinAvgTwoSlice.h"

int main()
{
    std::vector<int> A = {4, 2, 2, 5, 1, 5, 8};
    auto test = MinAvgTwoSlice(A);

    return 0;
}
