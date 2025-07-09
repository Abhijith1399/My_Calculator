
#include "DivideOperation.h"
#include <stdexcept>

double DivideOperation::execute(double a, double b) {
    if (b == 0.0)
        throw std::runtime_error("Division by zero");
    return a / b;
}
