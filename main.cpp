#include "Leader/EquiLeader.h"
#include "PrimeAndCompositeNumbers/Flags.h"
#include <iostream>

int main()
{
    std::vector<int> A = {1, 5, 3, 4, 3, 4, 1, 2, 3, 4, 6, 2};
    auto test = solution(A);
    std::cout << test << std::endl;

    return 0;
}
