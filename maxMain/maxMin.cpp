#include <iostream>
#include <vector>
using namespace std;

int znajdzMinStatyczna(int tablica[], int rozmiar)
{
    int minimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] < minimum)
            minimum = tablica[i];
    }
    return minimum;
}

int znajdzMaxStatyczna(int tablica[], int rozmiar)
{
    int maksimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] > maksimum)
            maksimum = tablica[i];
    }
    return maksimum;
}

int znajdzMinDynamiczna(int *tablica, int rozmiar)
{
    int minimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] < minimum)
            minimum = tablica[i];
    }
    return minimum;
}

int znajdzMaxDynamiczna(int *tablica, int rozmiar)
{
    int maksimum = tablica[0];
    for (int i = 1; i < rozmiar; ++i)
    {
        if (tablica[i] > maksimum)
            maksimum = tablica[i];
    }
    return maksimum;
}

int znajdzMinWektor(vector<int> &wektor)
{
    int minimum = wektor[0];
    for (size_t i = 1; i < wektor.size(); ++i)
    {
        if (wektor[i] < minimum)
            minimum = wektor[i];
    }
    return minimum;
}

int znajdzMaxWektor(vector<int> &wektor)
{
    int maksimum = wektor[0];
    for (size_t i = 1; i < wektor.size(); ++i)
    {
        if (wektor[i] > maksimum)
            maksimum = wektor[i];
    }
    return maksimum;
}

void wypelnij(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = rand() % 100;
    }
}


void wypisz( int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}
