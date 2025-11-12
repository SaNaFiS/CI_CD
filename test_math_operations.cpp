#include "math_operations.h"
#include <cassert>
#include <iostream>
#include <vector>

void test_sum() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    assert(sum(numbers) == 15);
    std::cout << "Test sum: PASSED\n";
}

void test_find_max() {
    std::vector<int> numbers = {1, 5, 3, 9, 2};
    assert(find_max(numbers) == 9);
    std::cout << "Test find_max: PASSED\n";
}

void test_find_min() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};
    assert(find_min(numbers) == 1);
    std::cout << "Test find_min: PASSED\n";
}

void test_empty_vector() {
    std::vector<int> numbers;
    assert(sum(numbers) == 0);
    assert(find_max(numbers) == 0);
    assert(find_min(numbers) == 0);
    std::cout << "Test empty vector: PASSED\n";
}

int main() {
    test_sum();
    test_find_max();
    test_find_min();
    test_empty_vector();
    
    std::cout << "All tests passed successfully!\n";
    return 0;
}