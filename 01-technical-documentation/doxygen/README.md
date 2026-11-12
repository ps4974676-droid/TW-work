# Doxygen: documenting C++ code

Doxygen reads specially formatted comments in source files and generates reference documentation. HTML is a common output format.

## Files in this example

- src/Calculator.hpp: class and method declarations with documentation comments.
- src/Calculator.cpp: method definitions, including a check for division by zero.
- src/main.cpp: a small program that uses the class and handles an invalid calculation.
- Doxyfile: project settings.

## Install and generate

On Debian or Ubuntu:

~~~bash
sudo apt update
sudo apt install doxygen graphviz
~~~

Generate the documentation from this directory:

~~~bash
doxygen Doxyfile
~~~

The HTML pages are written to docs/html/. Open docs/html/index.html in a browser.

## Comment pattern

~~~cpp
/**
 * @brief Adds two values.
 * @param a First value.
 * @param b Second value.
 * @return The sum of the values.
 */
~~~

Useful tags include @brief, @param, @return, @file, @class, @throws, @note and @see.

A useful comment explains purpose, inputs, outputs and important conditions. It should not merely repeat the function name. Try adding another method to Calculator, documenting it and regenerating the HTML pages.
