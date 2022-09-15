#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct  Time {
    int hour, min, sec, mlsec;

    friend ostream& operator <<(std::ostream& os, const Time& city) {

        os << "In city N now " << city.hour << " hours " << city.min << " minutes  " << city.sec << " seconds " << city.mlsec << " milliseconds\n";
        return os;
    }
    friend istream& operator>> (istream& is, Time& dt)
    {
        is >> dt.hour >> dt.min >> dt.sec >> dt.mlsec;
        return is;
    }
};

class Arithmetic {
public:

    int add(char symbol, int city1, int city2);
    int addHour(char symbol, int city1, int city2);

    int sub(char symbol, int city1, int city2);
    int subHour(char symbol, int city1, int city2);


private:
    char operation;
    int time—ityN = 0, unitTrans = 0;

};

class CallingArithmetic {
public:

    Time CallingAdd(Time day1, Time day2);

    Time CallingSub(Time day1, Time day2);

private:
    int hour;

};

Time FunctionAdd(Time city1, Time city2);

Time FunctionSub(Time city1, Time city2);