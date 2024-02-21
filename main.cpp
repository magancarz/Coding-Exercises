#include <iostream>

#include "Codility/Arrays/CyclicRotation.h"

int main()
{
    std::vector<int> A = {3, 8, 9, 7, 6};
    int K = 3;

    std::vector<int> result = CyclicRotation(A, K);

    std::cout << "[" << result[0];
    for (int i = 1; i < result.size(); ++i)
    {
        std::cout << ", " << result[i];
    }
    std::cout << "]\n";

    return 0;
}
