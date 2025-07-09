
#include "Calculator.h"
#include "AddOperation.h"
#include "SubtractOperation.h"
#include "MultiplyOperation.h"
#include "DivideOperation.h"

double Calculator::add(double a, double b) {
    return AddOperation::execute(a, b);
}

double Calculator::subtract(double a, double b) {
    return SubtractOperation::execute(a, b);
}

double Calculator::multiply(double a, double b) {
    return MultiplyOperation::execute(a, b);
}

double Calculator::divide(double a, double b) {
    return DivideOperation::execute(a, b);
}
