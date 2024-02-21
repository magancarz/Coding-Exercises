#include <iostream>

#include "Codility/Arrays/OddOccurrencesInArray.h"

int main()
{
    std::vector<int> A = {9, 3, 9, 3, 9, 7, 9};

    std::cout << "Odd one is " << OddOccurrencesInArray(A) << "\n";

    return 0;
}
