#pragma once

int FrogJmp(int X, int Y, int D)
{
    int diff = Y - X;
    int result = diff / D;
    if (diff % D > 0)
    {
        ++result;
    }

    return result;
}