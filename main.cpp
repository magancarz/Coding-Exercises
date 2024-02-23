#include <iostream>

#include "CountingElements/MaxCounters.h"

int main()
{
    std::vector<int> A = {3, 4, 4, 6, 1, 4, 4};
    auto test = MaxCounters(5, A);

    return 0;
}
