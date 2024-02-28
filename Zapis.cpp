#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
    int numer_buta;
};

void zapiszDoPliku(const Osoba &osoba) {
    fstream plik;
    plik.open("wejscia.txt", ios::out | ios::app);
    if (plik.good() == true) {
        plik << osoba.imie << " ";
        plik << osoba.nazwisko << " ";
        plik << osoba.wiek << " ";
        plik << osoba.numer_buta << " ";
        plik << endl;
        plik.close();
    } else {
        cout << "Nie udalo się otworzyć" << endl;
    }
}

int main() {
    Osoba osoba;

    cout << "Podaj swoje imie: ";
    cin >> osoba.imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> osoba.nazwisko;
    cout << "Podaj swój wiek: ";
    cin >> osoba.wiek;
    cout << "Podaj swój numer buta: ";
    cin >> osoba.numer_buta;

    zapiszDoPliku(osoba);

    return 0;
}