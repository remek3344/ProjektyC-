#include <iostream>
using namespace std;
void wypelnij(int tablica[], int rozmiar)
{
    cout << "podej rozmiar tablicy do wypełnienia\n";
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}

void wypisz(int tablica[], int rozmiar)
{
    cout << "Elementy tablicy to :\n";
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "To jest " << 1 + i << " element tablicy\n";
        cout << tablica[i] << endl;
    }
}


int main()
{
    int tab[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "podej " << 1 + i << " element tablicy\n";
    //     cin >> tab[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "to jest " << 1 + i << " element tablicy\n";
    //     cout << tab[i] << endl;
    // }

wypelnij(tab,5);
wypisz(tab,5);
    return 0;
}