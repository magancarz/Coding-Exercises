#pragma once

#include <string>
#include <vector>
#include <unordered_map>

int Nesting(std::string& S)
{
    std::vector<char> brackets;
    for (const auto& c : S)
    {
        if (c == '(')
        {
            brackets.push_back(c);
        }
        else if (c == ')')
        {
            if (brackets.empty())
            {
                return 0;
            }

            char& last_el = brackets.back();
            if (last_el == '(')
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