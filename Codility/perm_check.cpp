#include <vector>

// Codility: permutation check time complexity: O(n), space complexity: O(1)
int perm_check(std::vector<int> &A) {
    int n = A.size();

    int i = 0;
    while(i < n) {
        if(A[i] <= 0) {
            ++i;
            continue;
        }

        if(A[i] > n)
            return 0;

        int el_index = A[i] - 1;
        if(A[el_index] > 0) {
            A[i] = A[el_index];
            A[el_index] = -1;
        } else if(A[el_index] == 0) {
            --A[el_index];
            A[i] = 0;
            ++i;
        } else {
            return 0;
        }
    }

    for(auto& i : A) {
        if(abs(i) > 1 || abs(i) == 0)
            return 0;
    }

    return 1;
}