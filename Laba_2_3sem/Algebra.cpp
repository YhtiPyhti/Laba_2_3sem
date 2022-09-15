#include "Algebra.h"

int Arithmetic::add(char symbol, int city1, int city2) {
    if (symbol == '+') {
        time—ityN = city1 + city2;
        if (unitTrans > 0) {
            time—ityN += unitTrans;
            unitTrans = 0;
        }
        if (time—ityN / 60 == 0) return time—ityN;
        else {
            unitTrans = time—ityN / 60;
            return time—ityN % 60;
        }
    }
}

int Arithmetic::addHour(char symbol, int city1, int city2) {
    if (symbol == '+') {
        time—ityN = city1 + city2;
        if (unitTrans > 0) {
            time—ityN += unitTrans;
            unitTrans = 0;
        }
        if (time—ityN / 24 == 0) return time—ityN;
        else {
            unitTrans = time—ityN / 24;
            return time—ityN % 24;
        }
    }
}

int Arithmetic::sub(char symbol, int city1, int city2) {
    if (symbol == '-') {
        time—ityN = city1 - city2;
        if (unitTrans > 0) {
            time—ityN += 60;
            time—ityN -= unitTrans;
            unitTrans = 0;
        }
        if (time—ityN / 60 == 0) return time—ityN;
        else {
            unitTrans = time—ityN / 60;
            return time—ityN % 60;
        }
    }
}
int Arithmetic::subHour(char symbol, int city1, int city2) {
    if (symbol == '-') {
        time—ityN = city1 - city2;
        if (time—ityN / 24 == 0) return time—ityN;
        else {
            unitTrans = time—ityN / 24;
            return time—ityN % 24;
        }
    }
}



Time CallingArithmetic::CallingAdd(Time day1, Time day2) {
    Arithmetic f;
    Time siteN;
    siteN.mlsec = f.add('+', day1.mlsec, day2.mlsec);
    siteN.sec = f.add('+', day1.sec, day2.sec);
    siteN.min = f.add('+', day1.min, day2.min);
    siteN.hour = f.addHour('+', day1.hour, day2.hour);
    return siteN;
}

Time CallingArithmetic::CallingSub(Time day1, Time day2) {
    Arithmetic f;
    Time siteN;
    siteN.hour = f.subHour('-', day1.hour, day2.hour);
    siteN.min = f.sub('-', day1.min, day2.min);
    siteN.mlsec = f.sub('-', day1.mlsec, day2.mlsec);
    siteN.sec = f.sub('-', day1.sec, day2.sec);
    return siteN;
}



Time FunctionAdd(Time city1, Time city2) {
    CallingArithmetic a;
    Time num = a.CallingAdd(city1, city2);
    return num;
}

Time FunctionSub(Time city1, Time city2) {
    CallingArithmetic a;
    Time num = a.CallingSub(city1, city2);
    return num;
}