/**
 * @file Calculator.hpp
 * @brief Declares a small arithmetic calculator.
 */

#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

/**
 * @class Calculator
 * @brief Provides basic arithmetic operations.
 */
class Calculator {
public:
    /**
     * @brief Add two numbers.
     * @param a First operand.
     * @param b Second operand.
     * @return The sum of a and b.
     */
    double add(double a, double b) const;

    /**
     * @brief Divide one number by another.
     * @param numerator Number to be divided.
     * @param denominator Number to divide by; must not be zero.
     * @return The quotient.
     */
    double divide(double numerator, double denominator) const;
};

#endif
