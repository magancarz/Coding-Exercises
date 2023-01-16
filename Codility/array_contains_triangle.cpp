#include <algorithm>
#include <vector>

int array_contains_triangle(std::vector<int> &A) {
    if(A.size() < 3)
        return 0;

    sort(A.begin(), A.end());

    for(int i = 0; i < A.size() - 2; ++i) {
        if(A[i] >= 0 && A[i] > A[i + 2] - A[i + 1]) {
            return 1;
        }
    }

    return 0;
}