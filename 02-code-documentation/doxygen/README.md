# Doxygen

Doxygen generates reference documentation from comments written in source code. It is useful when another programmer needs to understand what a class or function does without reading every implementation detail.

## Example project

A small C++ calculator project is included in the example folder. It contains a documented class declaration, method definitions, a main program and a Doxyfile configuration.

## Generate the HTML pages

Install Doxygen. Graphviz is optional, but it enables class and call graphs when the relevant options are enabled.

```bash
cd 02-code-documentation/doxygen/example
doxygen Doxyfile
```

The HTML pages are written to docs/html/. Open docs/html/index.html in a browser.

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

Common tags include @file, @class, @brief, @param, @return, @throws, @note and @see.

A useful comment explains purpose, inputs, outputs and important conditions. It should not merely repeat the function name.
