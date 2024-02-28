#include <iostream>
using namespace std;
struct Oceny
{
    int wartosc;
    double waga;
};

void Srednia(Oceny oceny[], int liczbaOcen)
{
    int sumaOcen = 0;
    double sumaWag = 0;

    for (int i = 0; i < liczbaOcen; ++i)
    {
        sumaOcen += oceny[i].wartosc * oceny[i].waga;
        sumaWag += oceny[i].waga;
    }

    if (sumaWag == 0)
    {
        cout << "Błąd: Suma wag wynosi 0." << endl;
        return;
    }

    double Srednia = sumaOcen / sumaWag;
    cout << "Średnia:  " << Srednia << endl;
}

void wypiszOceny(Oceny oceny[], int liczbaOcen)
{
    cout << "Oceny i wagi: " << endl;
    for (int i = 0; i < liczbaOcen; ++i)
    {
        cout << "Ocena " << i + 1 << ": " << oceny[i].wartosc << ", Waga: " << oceny[i].waga << endl;
    }
}

int main()
{
    int liczbaOcen;

    cout << "Podaj liczbę ocen: ";
    cin >> liczbaOcen;
    Oceny *oceny = new Oceny[LiczbaOcen];

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