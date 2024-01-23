#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int rozmiar = 10;
    int tablica[rozmiar];

    for (int i = 0; i < rozmiar; ++i)
    {
        tablica[i] = rand() % 100;
    }

    cout << "Elementy w tablicy: ";
    for (int i = 0; i < rozmiar; ++i)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    int najwiekszy = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] > najwiekszy)
        {
            najwiekszy = tablica[i];
        }
    }

    cout << "Najwiekszy element to: " << najwiekszy << endl;

    return 0;
}
