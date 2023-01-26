#include <string>
#include <vector>

int brackets_v2(std::string& S) {
    std::vector<char> stack;

    for (auto& c : S) {
        if (c == '(') {
            stack.push_back(c);
        }
        else if (c == ')') {
            if (stack.size() > 0 && stack[stack.size() - 1] == '(') {
                stack.pop_back();
            }
            else {
                return false;
            }
        }
    }

    if (stack.size() > 0) {
        return false;
    }

    return true;
}