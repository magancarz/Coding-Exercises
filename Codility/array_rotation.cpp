#include <cstring>
#include <vector>

std::vector<int> array_rotation(std::vector<int> &A, int K) {
    if(K == 0 || K == A.size() || A.empty() || A.size() == 1)
        return A;

    K %= A.size();

    std::vector<int> res(A.size(), 0);
    const int* A_data = A.data();
    int* res_data = res.data();

    memcpy(res_data, A_data + A.size() - K, sizeof(int) * K);
    memcpy(res_data + K, A_data, sizeof(int) * (A.size() - K));

    return res;
}
