# Doxygen

Doxygen generates reference documentation from comments written in source code. It is especially useful for projects where another programmer needs to understand what a class or function does without reading every implementation detail.

## Files in the example

The working example is kept in [the Doxygen source folder](../../01-technical-documentation/doxygen/):
- [Calculator.hpp](../../01-technical-documentation/doxygen/src/Calculator.hpp) declares the class and documents its public methods.
- [Calculator.cpp](../../01-technical-documentation/doxygen/src/Calculator.cpp) contains the implementations.
- [main.cpp](../../01-technical-documentation/doxygen/src/main.cpp) shows how the class is used.
- [Doxyfile](../../01-technical-documentation/doxygen/Doxyfile) contains the generation settings.

## Generate the HTML pages

Install Doxygen. Graphviz is optional, but it enables class and call graphs when the relevant options are enabled.

```bash
cd 01-technical-documentation/doxygen
doxygen Doxyfile
```

The configured output directory is `docs/html`. Open `docs/html/index.html` in a browser.

## Documenting a function

```cpp
/**
 * @brief Returns the sum of two values.
 * @param a First value.
 * @param b Second value.
 * @return The sum of a and b.
 */
double add(double a, double b);
```

Common tags include `@file`, `@class`, `@brief`, `@param`, `@return`, `@note` and `@see`.

A useful comment explains purpose, inputs, outputs and important conditions. It should not merely repeat the function name.
