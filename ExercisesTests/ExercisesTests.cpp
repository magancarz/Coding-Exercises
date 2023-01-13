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
#include "../Codility/array_rotation.cpp"
#include "../Codility/lonely_odd_array.cpp"
#include "../Codility/frog_jump.cpp"
#include "../Codility/perm_missing_elem.cpp"
#include "../Codility/minimal_difference.cpp"
#include "../Codility/frog_river_one.cpp"
#include "../Codility/perm_check.cpp"

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

		TEST_METHOD(array_rotation_test) {
			std::vector<int> test_vec = { 1, 2, 3, 4, 5, 6 };

			const auto actual_vec = array_rotation(test_vec, 3);
			const std::vector<int> expected_vec = {4, 5, 6, 1, 2, 3};

			for(int i = 0; i < actual_vec.size(); ++i) {
				Assert::AreEqual(expected_vec[i], actual_vec[i]);
			}
		}

		TEST_METHOD(odd_pair_number_test) {
			std::vector<int> test_vec = { 9, 5, 9, 5, 7, 9, 9 };
			const int actual_number = lonely_odd_array(test_vec);
			constexpr int expected_number = 7;
			Assert::AreEqual(expected_number, actual_number);
		}

		TEST_METHOD(frog_jump_test) {
			const int actual_number = frog_jump(10, 85, 30);
			constexpr int expected_number = 3;
			Assert::AreEqual(expected_number, actual_number);
		}

		TEST_METHOD(perm_missing_elem_test) {
			std::vector<int> test = {2,3,4,5,6};
			const int actual_number = perm_missing_elem(test);
			constexpr int expected_number = 1;
			Assert::AreEqual(expected_number, actual_number);
		}

		TEST_METHOD(minimal_difference_test) {
			std::vector<int> test = {3, 1, 2, 4, 3};
			const int actual_number = minimal_difference(test);
			constexpr int expected_number = 1;
			Assert::AreEqual(expected_number, actual_number);
		}

		TEST_METHOD(frog_river_one_test) {
			std::vector<int> test = {1, 3, 1, 4, 2, 3, 5, 4};
			const int actual_number = frog_river_one(5, test);
			constexpr int expected_number = 6;
			Assert::AreEqual(expected_number, actual_number);
		}

		TEST_METHOD(perm_check_test) {
			std::vector<int> test = {1,2,3,5,5,4};
			const int actual = perm_check(test);
			constexpr int expected = 0;
			Assert::AreEqual(expected, actual);
		}
	};
}
