#include <vector>

int main() {
	std::vector<int> test;
	test.insert(test.begin() + 10000, 1);
}
