#include "pch.h"
#include "CppUnitTest.h"

#include <ranges>

#include "../Educative.io/merge_sort.h"
#include "../Educative.io/merge_sort.cpp"
#include "../Educative.io/longest_palindromic_subsequence.h"
#include "../Educative.io/longest_palindromic_subsequence.cpp"
#include "../GFG/zero_one_patterns.h"
#include "../GFG/zero_one_patterns.cpp"
#include "../Codility/binary_gap.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExercisesTests {
	TEST_CLASS(ExercisesTests) {
	public:
		
		TEST_METHOD(merge_sort_test) {
			int actual_arr[] = { 12, 11, 13, 5, 6, 7 };
			const int expected_arr[] = { 5, 6, 7, 11, 12, 13 };

			constexpr auto arr_size = std::size(actual_arr);

			merge_sort(actual_arr, 0, arr_size - 1);

			for(int i = 0; i < arr_size; ++i) {
				Assert::AreEqual(expected_arr[i], actual_arr[i]);
			}
		}

		TEST_METHOD(longest_palindromic_subsequence_test) {
			const int actual_len = lps("PASTA", "ATSAP", 5, 5);
			constexpr int expected_len = 3;

			Assert::AreEqual(expected_len, actual_len);
		}

		TEST_METHOD(zero_one_patterns_test) {
			const int actual_count = zero_one_pattern_count("1001ab010abc01001");
			constexpr int expected_count = 2;

			Assert::AreEqual(expected_count, actual_count);
		}

		TEST_METHOD(binary_gap_test) {
			const int actual_count = binary_gap(74901729);
			constexpr int expected_count = 4;
			Assert::AreEqual(expected_count, actual_count);
		}
	};
}
