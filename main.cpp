#include <iostream>

#include "TimeComplexity/PermMissingElem.h"

int main()
{
    std::vector<int> A = {2, 3, 1, 5};

    std::cout << "Perm missing element is " << PermMissingElem(A) << ".\n";

    return 0;
}
