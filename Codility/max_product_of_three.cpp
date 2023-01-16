#include <algorithm>
#include <vector>

int solution(std::vector<int> &A) {
    sort(A.begin(), A.end());

    int n = A.size();
    int product1, product2;
    product1 = A[n - 3] * A[n - 2] * A[n - 1];
    product2 = A[0] * A[1] * A[n - 1];

    return std::max(product1, product2);
}