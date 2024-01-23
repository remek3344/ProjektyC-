
#include <iostream>
using namespace std;

void Sortowanie(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp, j;

    for (int i = 1; i < liczbaElementowTablicy; i++)
    {
        temp = tablicaPrzeszukiwana[i];

        for(j = i - 1; j >= 0 && tablicaPrzeszukiwana[j] > temp; j--)
            tablicaPrzeszukiwana[j + 1] = tablicaPrzeszukiwana[j];

        tablicaPrzeszukiwana[j + 1] = temp;
    }
}

void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 11;
    }
}

void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}

int main()
{
    int tablicaTestowa[5];
    wypelnij(tablicaTestowa, 5);
    cout << "Przed sortowaniem ";
    
    wypisz(tablicaTestowa, 5);
    cout << endl;

    Sortowanie(tablicaTestowa, 5);
    cout << "Po sortowaniu: ";
   
    wypisz(tablicaTestowa, 5);

    return 0;
}
