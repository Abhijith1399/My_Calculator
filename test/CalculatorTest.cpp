
#include "../inc/Calculator.h"
#include <cassert>

int main() {
    Calculator calc;

    assert(calc.add(4, 5) == 9);
    assert(calc.subtract(10, 3) == 7);
    assert(calc.multiply(3, 4) == 12);
    assert(calc.divide(20, 4) == 5);

    try {
        calc.divide(5, 0);
        assert(false); // Should not reach here
    }
    catch (...) {
        assert(true); // Expected
    }

    return 0;
}


