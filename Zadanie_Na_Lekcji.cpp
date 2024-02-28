#include <iostream>
#include <vector>
#include <ctime>
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
    for (int i = 0; i < 10; ++i) {
        wektor[i] = rand() % 100; 
    }
    cout << "Losowe liczby dla wektora: ";
    for (int i = 0; i < 10; ++i) {
        cout << wektor[i] << " ";
    }
    cout << endl;
    cout << "Minimum wektor: " << znajdzMinWektor(wektor) << endl;
    cout << "Maksimum wektor: " << znajdzMaxWektor(wektor) << endl;
    return 0;
}
