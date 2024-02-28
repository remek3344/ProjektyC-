#include <iostream>
#include <string>
#include "operacj.h"
using namespace std;
int main()
{
    Dlugosc dlugosc;
    cout << "Witaj podaj dlugosc w calach: ";
    cin >> dlugosc.cale;

    cout << "Dlugosc w calach: " << dlugosc.cal(dlugosc) << endl;
    cout << "Dlugosc w stopach: " << dlugosc.stopy(dlugosc) << endl;
    cout << "Dlugosc w yardach: " << dlugosc.yardy(dlugosc) << endl;
    cout << "Dlugosc w milach: " << dlugosc.mile(dlugosc) << endl;

    return 0;
}