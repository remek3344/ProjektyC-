#include <iostream>
using namespace std;

void wypelnij(int tablicaDoWypelnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypelnienia[i] = rand() % 11;
    }
}

void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}

void sortowanie(int tablicaDoPosortowania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy - 1; i++)
    {
        int minimalny = i;
        for (int x = i + 1; x < liczbaElementowTablicy; x++)
        {
            if (tablicaDoPosortowania[x] < tablicaDoPosortowania[minimalny])
            {
                minimalny = x;
            }
        }

        int temp = tablicaDoPosortowania[minimalny];
        tablicaDoPosortowania[minimalny] = tablicaDoPosortowania[i];
        tablicaDoPosortowania[i] = temp;
    }
}

int main()
{
    int tablicaTestowa[5];
    wypelnij(tablicaTestowa, 5);

    cout << "Przed sortowaniem: ";
    wypisz(tablicaTestowa, 5);

    sortowanie(tablicaTestowa, 5);

    cout << endl
         << "Po sortowaniu: ";
    wypisz(tablicaTestowa, 5);

    return 0;
}
