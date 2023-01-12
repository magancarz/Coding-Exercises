#include <vector>

int perm_missing_elem(std::vector<int>& A) {
	if(A.empty())
        return 1;

    int* temp = new int[A.size() + 2];
    memset(temp, 0, A.size() + 1);

    for(auto i : A) {
        temp[i] = -1;
    }

    int result = 0;
    for(int i = 1; i < A.size() + 1; ++i) {
        if(temp[i] != -1)
            result = i;
    }

    if(result == 0)
        return A.size() + 1;

    delete[] temp;
    return result;
}