#pragma once

int CountDiv(int A, int B, int K)
{
    int before_A = A / K;
    int before_B = B / K;
    int result = before_B - before_A;
    if (A % K == 0)
    {
        ++result;
    }

    return result;
}