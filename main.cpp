#include <iostream>

#include "Codility/Iterations/BinaryGap.h"

int main()
{
    int a = 529; //1000010001 4 and 3

    std::cout << "Longest sequence of zeros in " << a << " is " << BinaryGap(a) << std::endl;
    return 0;
}
