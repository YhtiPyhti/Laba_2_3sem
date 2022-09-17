#include "Comparison.h"

bool comparison::equals(string symbol, int city1, int city2) {
    if (symbol == "==") {
        return city1 == city2;
    }
}
bool comparison::greater(string symbol, int city1, int city2) {
    if (symbol == ">") {
        return city1 > city2;
    }
}

bool comparison::less(string symbol, int city1, int city2) {
    if (symbol == "<") {
        return city1 < city2;
    }
}

string CallingComparison::CallingEquals(Time day1, Time day2) {
    string res = "";
    if (f.equals("==", day1.hour, day2.hour) == true) {
        res += "hours equal ";
    }
    else res += "hours not equal ";

    if (f.equals("==", day1.min, day2.min) == true) {
        res += " minutes equal ";
    }
    else res += " minutes not equal ";

    if (f.equals("==", day1.sec, day2.sec) == true) {
        res += " seconds equal ";
    }
    else res += " seconds not equal ";

    if (f.equals("==", day1.mlsec, day2.mlsec) == true) {
        res += " milliseconds equal ";
    }
    else res += " milliseconds not equal ";
    return res;
}

string CallingComparison::CallingGreater(Time day1, Time day2) {
    string res = "";
    if (f.greater(">", day1.hour, day2.hour) == true) {
        res += "hours greater ";
    }
    else res += "hours not greater ";

    if (f.greater(">", day1.min, day2.min) == true) {
        res += " minutes greater ";
    }
    else res += " minutes not greater ";

    if (f.greater(">", day1.sec, day2.sec) == true) {
        res += " seconds greater ";
    }
    else res += " seconds not greater ";

    if (f.greater(">", day1.mlsec, day2.mlsec) == true) {
        res += " milliseconds greater ";
    }
    else res += " milliseconds not greater ";
    return res;
}

string CallingComparison::CallingLess(Time day1, Time day2) {
    string res = "";
    if (f.less("<", day1.hour, day2.hour) == true) {
        res += "hours less ";
    }
    else res += "hours not less ";

    if (f.less("<", day1.min, day2.min) == true) {
        res += " minutes less ";
    }
    else res += " minutes less ";

    if (f.less("<", day1.sec, day2.sec) == true) {
        res += " seconds less ";
    }
    else res += " seconds not less ";

    if (f.less("<", day1.mlsec, day2.mlsec) == true) {
        res += " milliseconds less ";
    }
    else res += " milliseconds not less ";
    return res;
}

string FunctionEquals(Time city1, Time city2) {
    CallingComparison a;
    string num = a.CallingEquals(city1, city2);
    return num;
}

string FunctionGreater(Time city1, Time city2) {
    CallingComparison a;
    string num = a.CallingGreater(city1, city2);
    return num;
}

string FunctionLess(Time city1, Time city2) {
    CallingComparison a;
    string num = a.CallingLess(city1, city2);
    return num;
}