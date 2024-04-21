// accLib.h
#ifndef ACCLIB_H
#define ACCLIB_H

#include <string>

class AccLib {
public:
    std::string getGreeting() const;
    int add(int a, int b) const;
    bool isEven(int number) const;
};

#endif
