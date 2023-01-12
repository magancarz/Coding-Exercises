#include <algorithm>
#include <unordered_map>

int frog_river_one(int X, std::vector<int>& A) {
	std::unordered_map<int, int> m;

    for(int i = 0; i < A.size(); ++i) {
        if(m.count(A[i]))
            continue;
        
        m[A[i]] = i;
    }

    int res = 0;
    for(int i = 1; i <= X; ++i) {
        if(!m.count(i))
            return -1;
        
        res = std::ranges::max(res, m[i]);
    }

    return res;
}
