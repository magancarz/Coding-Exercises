#include "zero_one_patterns.h"

#include <iostream>

int zero_one_pattern_count(const std::string& str) {
	int res = 0;

	char last = str[0];
	for(int i = 1; i < str.length(); ++i) {
		if(last == '1' && str[i] == '0') {
			++i;
			while(i < str.length() && str[i] == '0')
				++i;

			if(str[i] == '1') {
				++res;
			}
		}

		last = str[i];
	}

	return res;
}
