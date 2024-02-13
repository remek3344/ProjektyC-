#include <fstream>
#include <iostream>
using namespace std;

struct osoba
{
    int iD; // Dodano identyfikator
    string imie;
    string nazwisko;
    int wiek;
    int nrButa;
};

void wpiszDoPliku(osoba *baza, int rozmiar)
{
    fstream plik;
    plik.open("baza2.txt", ios::out);
    if (plik.good())
    {
        for (int i = 0; i < rozmiar; i++)
        {
            plik << baza[i].iD << " " << baza[i].imie << " " << baza[i].nazwisko << " " << baza[i].wiek << " " << baza[i].nrButa << endl;
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie zapisac pliku";
    }
}

int main()
{
    fstream plik;
    plik.open("baza.txt", ios::in);
    int i = 0;
    if (plik.good())
    {
        string temp;
        while (plik >> temp)
        {
            i++;
        }
        plik.clear();
        plik.seekg(0, ios::beg);
    }
    plik.close();

    int k = i / 5;
    osoba *baza = new osoba[k];

    plik.open("baza.txt", ios::in);
    if (plik.good())
    {
        for (int i = 0; i < k; i++)
        {
            plik >> baza[i].iD;
            plik >> baza[i].imie;
            plik >> baza[i].nazwisko;
            plik >> baza[i].wiek;
            plik >> baza[i].nrButa;
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
        return 1; // Zakończ program z kodem błędu
    }

    for (int i = 0; i < k; i++)
    {
        cout << "ID: " << baza[i].iD << ", Imie: " << baza[i].imie << ", Nazwisko: " << baza[i].nazwisko << ", Wiek: " << baza[i].wiek << ", Numer buta: " << baza[i].nrButa << endl;
    }

    cout << "Osoby starsze niz 12 lat:\n";
    for (int i = 0; i < k; i++)
    {
        if (baza[i].wiek > 12)
        {
            cout << "ID: " << baza[i].iD << ", Imie: " << baza[i].imie << ", Nazwisko: " << baza[i].nazwisko << ", Wiek: " << baza[i].wiek << ", Numer buta: " << baza[i].nrButa << endl;
        }
    }

    // Zapis do pliku
    wpiszDoPliku(baza, k);

    // Zwolnienie pamięci
    delete[] baza;

    return 0;
}