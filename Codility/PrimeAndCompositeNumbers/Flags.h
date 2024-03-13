#pragma once

#include <vector>

std::vector<bool> findPeaks(const std::vector<int>& vals)
{
    std::vector<bool> peaks(vals.size(), false);
    for (size_t i = 1; i < vals.size() - 1; ++i)
    {
        peaks[i] = vals[i - 1] < vals[i] && vals[i] > vals[i + 1];
    }

    return peaks;
}

std::vector<int> findNextPeaks(const std::vector<int>& vals)
{
    std::vector<bool> peaks = findPeaks(vals);

    std::vector<int> next_peaks(peaks.size(), 0);
    next_peaks[next_peaks.size() - 1] = -1;
    for (int i = next_peaks.size() - 2; i >= 0; --i)
    {
        if (peaks[i])
        {
            next_peaks[i] = i;
        }
        else
        {
            next_peaks[i] = next_peaks[i + 1];
        }
    }

    return next_peaks;
}

int solution(std::vector<int>& A)
{
    std::vector<int> next_peaks = findNextPeaks(A);
    size_t i = 1;
    int result = 0;
    while ((i - 1) * i <= A.size())
    {
        size_t position = 0;
        int num_of_flags = 0;
        while (position < A.size() && num_of_flags < i)
        {
            position = next_peaks[position];
            if (position == -1)
            {
                break;
            }

            ++num_of_flags;
            position += i;
        }

        result = std::max(result, num_of_flags);
        ++i;
    }

    return result;
}
