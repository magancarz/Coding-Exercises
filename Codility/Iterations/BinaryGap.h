#pragma once

int BinaryGap(int N)
{
    int longest_sequence = 0;
    int current_sequence = 0;
    bool valid_sequence = false;
    while (N > 0)
    {
        if (N % 2 == 1)
        {
            longest_sequence = std::max(current_sequence, longest_sequence);
            current_sequence = 0;
            valid_sequence = true;
        }
        else if (valid_sequence)
        {
            ++current_sequence;
        }
        N >>= 1;
    }

    return longest_sequence;
}