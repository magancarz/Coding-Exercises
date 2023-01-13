#include <unordered_map>

int firs_missing_elem(std::vector<int> &A) {
    int n = A.size();

    std::unordered_map<int, int> m;
    for(auto& i : A) {
        ++m[i];
    }

    int i = 1;
    while(m[i] != 0) {
        ++i;
    }

    return i;
}