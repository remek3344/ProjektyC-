#include <iostream>
#include <cmath>
using namespace std;

bool LiczbaPierwsza(int liczba)
{

    int pierwiastek = sqrt(liczba);
    for (int i = 2; i <= pierwiastek; ++i)
    {
        if (liczba % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (LiczbaPierwsza(liczba))
    {
        cout << liczba << " jest liczba pierwsza." << endl;
    }
    else
    {
        cout << liczba << " nie jest liczba pierwsza." << endl;
    }

    return 0;
}
