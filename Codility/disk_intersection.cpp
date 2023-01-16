#include <vector>

int disk_intersection(std::vector<int> &A) {
    if(A.empty()) return 0;

    std::vector<int> s(A.size(), 0);
	std::vector<int> e(A.size(), 0);
    std::vector<int> cs(A.size(), 0);
	std::vector<int> ce(A.size(), 0);

    for(int i = 0; i < A.size(); ++i) {
        s[i] = i - A[i] <= 0? 0 : i - A[i];
        e[i] = i + A[i] > A.size() - 1? A.size() - 1 : i + A[i];

        ++cs[s[i]];
        ++ce[e[i]];
    }

    std::vector<int> ccs(A.size(), 0);
    std::vector<int> cce(A.size(), 0);
    ccs[0] = cs[0];
    cce[0] = ce[0];

    for(int i = 1; i < A.size(); ++i) {
        ccs[i] = cs[i] + ccs[i - 1];
        cce[i] = ce[i] + cce[i - 1];
    }

    int result = 0;
    for(int i = 0; i < A.size(); ++i) {
        result += (ccs[i] - cce[i - 1] - cs[i]) * cs[i] + cs[i] * (cs[i] - 1) / 2;
    }

    if(result > 10000000) return -1;
    return result;
}
