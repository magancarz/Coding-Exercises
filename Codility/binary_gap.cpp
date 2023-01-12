#include <string>

int binary_gap(int N) {
    // convert number N to binary
    std::string bin;
    for(int i = N; i >= 1; i /= 2) {
        bin += std::to_string(i % 2);
    }

    char last = bin[0];
    int longest = 0, current = 0;
    for(unsigned int i = 1; i < bin.length(); ++i) {
        if(bin[i] == '0' && last == '1') {
            ++current;
            ++i;
            while(i < bin.length() && bin[i] == '0') {
                ++current;
                ++i;
            }
            if(bin[i] == '1') {
                longest = std::max(longest, current);
                current = 0;
            }
        }

        last = bin[i];
    }

    return longest;
}