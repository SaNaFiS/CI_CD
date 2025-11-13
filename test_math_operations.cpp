/**
 * @file test_math_operations.cpp
 * @brief Tests of math_operations
 * @author Alexandr Fisher
 * @version 1.0
 */

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
    assert(average(numbers) == 0.0);
    std::cout << "Test empty vector: PASSED\n";
}

void test_average() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    assert(average(numbers) == 3.0);
    std::cout << "Test average: PASSED\n";
}

void test_reverse_vector() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> reversed = reverse_vector(numbers);
    assert(reversed[0] == 5);
    assert(reversed[1] == 4);
    assert(reversed[2] == 3);
    assert(reversed[3] == 2);
    assert(reversed[4] == 1);
    std::cout << "Test reverse_vector: PASSED\n";
}

int main() {
    test_sum();
    test_find_max();
    test_find_min();
    test_average();
    test_empty_vector();
    test_reverse_vector();
    
    std::cout << "All tests passed successfully!\n";
    return 0;
}