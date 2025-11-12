#include "math_operations.h"
#include <climits>

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