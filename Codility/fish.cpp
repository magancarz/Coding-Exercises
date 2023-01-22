#include <vector>

int solution(std::vector<int> &A, std::vector<int> &B) {
    int unalived = 0;
    std::vector<int> stack;

    for(int i = 0; i < A.size(); ++i) {
        if(B[i]) {
            stack.push_back(A[i]);
        } else {
            while(stack.size() && stack.back() < A[i]) {
                stack.pop_back();
                ++unalived;
            }
            if(stack.size()) {
                ++unalived;
            }
        }
    }

    return A.size() - unalived;
}
