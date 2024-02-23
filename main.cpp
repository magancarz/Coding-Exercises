#include <iostream>

#include "CountingElements/PermCheck.h"

int main()
{
    std::vector<int> A = {4, 1, 3};

    std::cout << "Perm check " << PermCheck(A) << ".\n";

    return 0;
}
