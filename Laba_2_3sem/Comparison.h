#pragma once
#include "Algebra.h"

class comparison {
public:

    bool equals(string symbol, int city1, int city2);
    bool greater(string symbol, int city1, int city2);

    bool less(string symbol, int city1, int city2);
};

class CallingComparison {
public:
    comparison f;
    string CallingEquals(Time day1, Time day2);

    string CallingGreater(Time day1, Time day2);

    string CallingLess(Time day1, Time day2);

};

string FunctionEquals(Time city1, Time city2);

string FunctionGreater(Time city1, Time city2);

string FunctionLess(Time city1, Time city2);