
#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;
    double a = 10, b = 5;

    std::cout << "Add: " << calc.add(a, b) << "\n";
    std::cout << "Subtract: " << calc.subtract(a, b) << "\n";
    std::cout << "Multiply: " << calc.multiply(a, b) << "\n";

    try {
        std::cout << "Divide: " << calc.divide(a, b) << "\n";
    }
    catch (std::exception& ex) {
        std::cout << "Error: " << ex.what() << "\n";
    }

    return 0;
}