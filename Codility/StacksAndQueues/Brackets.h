#pragma once

#include <string>
#include <vector>
#include <unordered_map>

int Brackets(std::string& S)
{
    std::unordered_map<char, char> matches = {{')', '('}, {'}', '{'}, {']', '['}};
    std::vector<char> brackets;
    for (const auto& c : S)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            brackets.push_back(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (brackets.empty())
            {
                return 0;
            }

            char& last_el = brackets.back();
            if (last_el == matches[c])
            {
                brackets.pop_back();
            }
            else
            {
                return 0;
            }
        }
    }

    return brackets.empty();
}