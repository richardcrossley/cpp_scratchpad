#include <iostream>

#include "SimpleCalc_lib/SimpleCalc.h"

int main()
{
    auto* simpleCalc = new SimpleCalc(10, 5);
    auto resultAdd = simpleCalc->add();
    auto resultSub = simpleCalc->subtract();
    auto resultMul = simpleCalc->multiply();
    auto resultDiv = simpleCalc->divide();
    std::cout << "Simple Calc" << std::endl;
    std::cout << "Add: " << resultAdd << std::endl;
    std::cout << "Sub: " << resultSub << std::endl;
    std::cout << "Mul: " << resultMul << std::endl;
    std::cout << "Div: " << resultDiv << std::endl;
    delete simpleCalc;
    return 0;
}
