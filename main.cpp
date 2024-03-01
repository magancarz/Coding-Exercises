#include <iostream>

#include "PrefixSums/GenomicRangeQuery.h"
#include "PrefixSums/MinAvgTwoSlice.h"
#include "Sorting/NumberOfDiskIntersections.h"
#include "StacksAndQueues/Brackets.h"
#include "StacksAndQueues/Fish.h"

int main()
{
    std::vector<int> A = {4, 3, 2, 1, 5};
    std::vector<int> B = {0, 1, 0, 0, 0};
    auto test = solution(A, B);

    return 0;
}
