/**
 * @file math_operations.h
 * @brief Header file for mathematical operations on vectors
 * @author Alexandr Fisher
 * @version 1.0
 */
#include <vector>

/**
 * @brief Calculates the sum of all elements in a vector
 * @param numbers Vector of integers
 * @return Sum of all elements in the vector
 * @note Returns 0 if the vector is empty
 */
int sum(const std::vector<int>& numbers);

/**
 * @brief Finds the maximum value in a vector
 * @param numbers Vector of integers  
 * @return Maximum value in the vector
 * @warning Returns 0 if the vector is empty
 */
int find_max(const std::vector<int>& numbers);

/**
 * @brief Finds the minimum value in a vector
 * @param numbers Vector of integers
 * @return Minimum value in the vector
 * @warning Returns 0 if the vector is empty
 */
int find_min(const std::vector<int>& numbers);

/**
 * @brief Calculates the average of vector elements
 * @param numbers Vector of integers
 * @return Average value as double
 * @details Calculates sum and divides by number of elements
 */
double average(const std::vector<int>& numbers);

/**
 * @brief Reverses the order of elements in a vector
 * @param numbers Vector of integers to reverse
 * @return New vector with elements in reverse order
 */
std::vector<int> reverse_vector(const std::vector<int>& numbers);