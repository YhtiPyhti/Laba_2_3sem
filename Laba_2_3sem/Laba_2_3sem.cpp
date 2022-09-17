//Дружественные функции - это функции, которые не являются членами класса, однако имеют доступ
//к его закрытым членам - переменным и функциям, которые имеют спецификатор private.

#include "Algebra.h"
#include "Comparison.h"

int main()
{
    Time London{ 12, 60, 14, 52 };
    Time Moskow{ 12, 0, 14, 10};
    Time NewCity;

    NewCity = FunctionAdd(London, Moskow);
    cout << NewCity;
    NewCity = FunctionSub(London, Moskow);
    cout << NewCity;

    cout << "Input city Time: ";
    cin >> NewCity;
    cout << NewCity;

    cout << "Result comparison: " << FunctionEquals(London, Moskow) << endl;
    cout << "Result comparison: " << FunctionGreater(London, Moskow) << endl;
    cout << "Result comparison: " << FunctionLess(London, Moskow) << endl;


}