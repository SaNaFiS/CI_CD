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
    
    return 0;
}