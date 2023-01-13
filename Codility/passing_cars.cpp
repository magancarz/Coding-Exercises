#include <vector>

int passing_cars(std::vector<int> &A) {
    int n = A.size();
    std::vector<int> suffix_sum(n, 0);
    suffix_sum[n - 1] = A[n - 1];
    for(int i = n - 2; i >= 0; --i) {
        suffix_sum[i] = suffix_sum[i + 1] + A[i];
    }

    int j = n - 1,
        res = 0;
    while(j >= 0) {
        if(A[j] == 0) {
            res += suffix_sum[j];
            if(res > 1000000000) return -1;
        }
        --j;
    }

    return res;
}
