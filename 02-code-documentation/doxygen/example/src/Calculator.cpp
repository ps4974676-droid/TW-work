/**
 * @file Calculator.cpp
 * @brief Implements the Calculator operations.
 */

#include "Calculator.hpp"

#include <stdexcept>

double Calculator::add(double a, double b) const {
    return a + b;
}

double Calculator::divide(double numerator, double denominator) const {
    if (denominator == 0.0) {
        throw std::invalid_argument("denominator must not be zero");
    }

    return numerator / denominator;
}
