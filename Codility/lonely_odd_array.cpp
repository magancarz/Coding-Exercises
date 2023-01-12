#include <unordered_map>
#include <vector>

int lonely_odd_array(std::vector<int> &A) {
	std::unordered_map<int, int> m;

    for(auto i : A) {
        ++m[i];
    }

    for(auto [fst, snd] : m) {
        if(snd % 2 == 1)
            return fst;
    }
}
