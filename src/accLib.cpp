// accLib.cpp
#include "accLib.h"

std::string AccLib::getGreeting() const {
    return "Hello from accLib!";
}

int AccLib::add(int a, int b) const {
    return a + b;
}

bool AccLib::isEven(int number) const {
    return number % 2 == 0;
}
