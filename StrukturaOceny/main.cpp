#include <iostream>
#include "operacje1.h"
using namespace std;
int main()
{
    int liczbaOcen;

    cout << "Podaj liczbę ocen: ";
    cin >> liczbaOcen;

    Oceny *oceny = new Oceny[liczbaOcen];

    cout << "Podaj oceny i wagi: " << endl;
    for (int i = 0; i < liczbaOcen; ++i)
    {
        cout << "Ocena " << i + 1 << ": ";
        cin >> oceny[i].wartosc;
        cout << "Waga " << i + 1 << ": ";
        cin >> oceny[i].waga;
    }
    wypiszOceny(oceny, liczbaOcen);
    Srednia(oceny, liczbaOcen);

    return 0;
}