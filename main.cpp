/**
 * @file main.cpp
 * @brief Print results of math_operations
 * @author Alexandr Fisher
 * @version 1.0
 */

#include "math_operations.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 5, 8, 3, 12};
    
    std::cout << "Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Sum: " << sum(numbers) << std::endl;
    std::cout << "Max: " << find_max(numbers) << std::endl;
    std::cout << "Min: " << find_min(numbers) << std::endl;
    std::cout << "Avg: " << average(numbers) << std::endl;
    std::vector<int> reversed = reverse_vector(numbers);
    std::cout << "Reversed: ";
    for (int num : reversed) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}