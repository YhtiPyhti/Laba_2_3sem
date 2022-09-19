//Дружественные функции - это функции, которые не являются членами класса, однако имеют доступ
//к его закрытым членам - переменным и функциям, которые имеют спецификатор private.

#include "Algebra.h"
#include "Comparison.h"
#include <string>
#include <sstream>

int main()
{
    int n = 0;
    string stroka = "14 05 24 45";
    ifstream in("C:\\Users\\Sergei\\Desktop\\Input.txt");
    ofstream fout("C:\\Users\\Sergei\\Desktop\\Output.txt", ios::app);

    stringstream sin("14 24 21 10");
    stringstream sout;


    Time London{ 12, 60, 14, 52 };
    Time Moskow{ 12, 0, 14, 10 };
    Time NewCity;

    cout << "\t Laboratory work number 2 \t\n" << endl;

    while (true)
    {

        cout << "What do you want?\n";
        cout << "1) Create city with time.\n";
        cout << "2) Output city\n";
        cout << "3) Addup times\n";
        cout << "4) Subtract times\n";
        cout << "5) Compare times\n";
        cout << "6) Exit\n";
        cout << "Your Choice: ";
        cin >> n;
        system("cls");
        switch (n)
        {
        case 1:
            cout << " 1) File\n 2) Console\n 3) String\n Your Choice: ";
            cin >> n;
            if(n == 1){
                //getline(cin, NewCity);
            }
            else if (n == 2) {
                cin >> NewCity;
            }
            else if (n == 3) {
                sin >> NewCity;
            }
            else {
                cout << "Inncorrect input!!!\n\n";
            }
            break;
        case 2:
            cout << " 1) File\n 2) Console\n 3) String\n Your Choice: ";
            cin >> n;
            if (n == 1) {
                fout << "In city N now " << NewCity.hour << " hours " << NewCity.min << " minutes  " << NewCity.sec << " seconds " << NewCity.mlsec << " milliseconds\n";
                system("notepad C:\\Users\\Sergei\\Desktop\\Output.txt ");
            }
            else if (n == 2) {
                cout << NewCity;
            }
            else if (n == 3) {
                sout << "In city N now " << NewCity.hour << " hours " << NewCity.min << " minutes  " << NewCity.sec << " seconds " << NewCity.mlsec << " milliseconds\n";
            }
            else {
                cout << "Inncorrect input!!!\n\n";
            }
            break;
        case 3:
            cout << London << endl << Moskow << endl; 
            NewCity = FunctionAdd(London, Moskow);
            cout << "Result of addition: " << NewCity << endl;
            break;
        case 4:
            cout << London << endl << Moskow << endl;
            NewCity = FunctionSub(London, Moskow);
            cout << "Result of subtract: " << NewCity << endl;
            break;
        case 5:
            cout << "Result comparison: " << FunctionEquals(London, Moskow) << endl << endl;
            cout << "Result comparison: " << FunctionGreater(London, Moskow) << endl << endl;
            cout << "Result comparison: " << FunctionLess(London, Moskow) << endl << endl;
            break;
        case 6:
            cout << "Goodbye!";
            exit(1);
        default:
            cout << "Inncorrect input!!!\n\n";
            main();
            break;
        }
    }
}