#include <vector>
#include <string>

int brackets(std::string &S) {
	std::vector<char> stack;
    if(S[0] == ')' || S[0] == '}' || S[0] == ']')
        return 0;

    for(char c : S) {
        switch(c) {
            case ')':
                if(stack[stack.size() - 1] == '(')
                    stack.pop_back();
                else return 0;
            break;
            case '}':
                if(stack[stack.size() - 1] == '{')
                    stack.pop_back();
                else return 0;
            break;
            case ']':
                if(stack[stack.size() - 1] == '[')
                    stack.pop_back();
                else return 0;
            break;
            default:
                stack.push_back(c);
            break;
        }
    }

    if(stack.empty())
        return 1;

    return 0;
}