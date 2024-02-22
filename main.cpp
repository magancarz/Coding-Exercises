#include <iostream>

#include "TimeComplexity/TapeEquilibrium.h"

int main()
{
    std::vector<int> A = {3, 1, 2, 4, 3};

    std::cout << "Minimal sum is " << TapeEquilibrium(A) << ".\n";

    return 0;
}
