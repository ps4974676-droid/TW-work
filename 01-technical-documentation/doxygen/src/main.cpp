/**
 * @file main.cpp
 * @brief Demonstrates the Calculator class.
 */

#include <exception>
#include <iostream>

#include "Calculator.hpp"

int main() {
    const Calculator calculator;

    std::cout << "2 + 3 = " << calculator.add(2, 3) << '\n';

    try {
        std::cout << "8 / 2 = " << calculator.divide(8, 2) << '\n';
    } catch (const std::exception& error) {
        std::cerr << "Calculation failed: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
