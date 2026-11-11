# Doxygen: documenting C++ code

Doxygen reads specially formatted comments in source files and generates reference documentation. HTML is a common output format.

## Files in this example

- `src/Calculator.hpp`: class and method declarations with documentation comments.
- `src/Calculator.cpp`: method definitions.
- `src/main.cpp`: a small program that uses the class.
- `Doxyfile`: project settings.

## Install and generate

On Debian or Ubuntu:

```bash
sudo apt update
sudo apt install doxygen graphviz
```

Generate the documentation from this directory:

```bash
doxygen Doxyfile
```

The HTML pages are written to `docs/html/`. Open `docs/html/index.html` in a browser.

## Comment pattern

```cpp
/**
 * @brief Adds two values.
 * @param a First value.
 * @param b Second value.
 * @return The sum of the values.
 */
```

Useful tags include `@brief`, `@param`, `@return`, `@file`, `@class`, `@note` and `@see`.

Try adding a method to Calculator, documenting its inputs and output, then regenerate the HTML pages.
