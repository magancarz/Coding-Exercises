#include <iostream>

#include "CountingElements/FrogRiverOne.h"

int main()
{
    std::vector<int> A = {1, 3, 1, 4, 2, 3, 5, 4};

    std::cout << "Earliest second a frog can jump over the river is " << FrogRiverOne(5, A) << ".\n";

    return 0;
}
