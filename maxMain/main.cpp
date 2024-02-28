#include <iostream>
#include <vector>
#include <ctime>
#include "maxMin.h"
using namespace std;

int main()
{
    int statycznaTablica[10];
    wypelnij(statycznaTablica, 10);
    cout << "Losowe liczby dla tablicy statycznej: ";
    wypisz(statycznaTablica, 10);
    cout << "Minimum statyczna tablica: " << znajdzMinStatyczna(statycznaTablica, 10) << endl;
    cout << "Maksimum statyczna tablica: " << znajdzMaxStatyczna(statycznaTablica, 10) << endl;

    int *dynamicznaTablica = new int[10];
    wypelnij(dynamicznaTablica, 10);
    cout << "Losowe liczby dla tablicy dynamicznej: ";
    wypisz(dynamicznaTablica, 10);
    cout << "Minimum dynamiczna tablica: " << znajdzMinDynamiczna(dynamicznaTablica, 10) << endl;
    cout << "Maksimum dynamiczna tablica: " << znajdzMaxDynamiczna(dynamicznaTablica, 10) << endl;
    delete[] dynamicznaTablica;

    vector<int> wektor(10);
    for (int i = 0; i < 10; ++i)
    {
        wektor[i] = rand() % 100;
    }
    cout << "Losowe liczby dla wektora: ";
    for (int i = 0; i < 10; ++i)
    {
        cout << wektor[i] << " ";
    }
    cout << endl;
    cout << "Minimum wektor: " << znajdzMinWektor(wektor) << endl;
    cout << "Maksimum wektor: " << znajdzMaxWektor(wektor) << endl;
    return 0;
}
