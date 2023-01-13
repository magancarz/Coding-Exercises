#include <algorithm>
#include <vector>

std::vector<int> max_counters(int N, std::vector<int> &A) {
	std::vector<int> res(N, 0);

    int curr_max = 0, add_max = 0;
    for(auto& i : A) {
        if(i <= N) {
            res[i - 1] = std::ranges::max(res[i - 1] + 1, add_max + 1);
            curr_max = std::max(curr_max, res[i - 1]);
        } else {
            add_max = curr_max;
        }

    }

    for(auto& i : res) {
        i = std::max(add_max, i);
    }

    return res;
}
