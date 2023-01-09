#include "longest_palindromic_subsequence.h"

int lps(const char* str1, const char* str2, int m, int n) {
	const auto l = new int*[m + 1];
	for(int i = 0; i < m + 1; i++) {
		l[i] = new int[n + 1];
	}

	for(int i = 0; i <= m; ++i) {
		for(int j = 0; j <= n; ++j) {
			if(i == 0 || j == 0) {
				l[i][j] = 0;
			} else if(str1[i - 1] == str2[j - 1]) {
				l[i][j] = l[i - 1][j - 1] + 1;
			} else {
				l[i][j] = std::max(l[i - 1][j], l[i][j - 1]);
			}
		}
	}

	const int result = l[m][n];
	for(int i = 0; i < m; ++i) {
		delete[] l[i];
	}

	return result;
}