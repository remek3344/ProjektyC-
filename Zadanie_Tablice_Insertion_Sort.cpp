#include <iostream>
using namespace std;

void insertionSort(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    for (int i = 1; i < liczbaElementowTablicy; i++)
    {
        int key = tablicaPrzeszukiwana[i];
        int j = i - 1;

        while (j >= 0 && tablicaPrzeszukiwana[j] > key)
        {
            tablicaPrzeszukiwana[j + 1] = tablicaPrzeszukiwana[j];
            j = j - 1;
        }
        tablicaPrzeszukiwana[j + 1] = key;
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

    insertionSort(tablicaTestowa, 5);

    cout << "Po sortowaniu: ";
    wypisz(tablicaTestowa, 5);

    return 0;
}
