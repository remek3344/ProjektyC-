#include <iostream>
using namespace std;

struct Dlugosc
{
    float cale;

    float cal(Dlugosc dlugosc)
    {
        return cale;
    }

    float stopy(Dlugosc dlugosc)
    {
        return cale / 12.0;
    }

    float yardy(Dlugosc dlugosc)
    {
        return cale / 36.0;
    }

    float mile(Dlugosc dlugosc)
    {
        return cale / 63360.0;
    }
};

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