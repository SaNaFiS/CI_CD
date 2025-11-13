/**
 * @file math_operations.cpp
 * @brief Implementation of mathematical operations
 * @author Alexandr Fisher
 * @version 1.0
 */

#include "math_operations.h"
#include <climits>
#include <algorithm>

int sum(const std::vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        total += num;
    }
    return total;
}

int find_max(const std::vector<int>& numbers) {
    if (numbers.empty()) return 0;
    int max_val = INT_MIN;
    for (int num : numbers) {
        if (num > max_val) max_val = num;
    }
    return max_val;
}

int find_min(const std::vector<int>& numbers) {
    if (numbers.empty()) return 0;
    int min_val = INT_MAX;
    for (int num : numbers) {
        if (num < min_val) min_val = num;
    }
    return min_val;
}

double average(const std::vector<int>& numbers) {
    if (numbers.empty()) return 0.0;
    return static_cast<double>(sum(numbers)) / numbers.size();
}

std::vector<int> reverse_vector(const std::vector<int>& numbers) {
    std::vector<int> reversed = numbers;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}