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
    ofstream plik;
    plik.open("wejscia.txt", ios::out | ios::app);
    if (plik.good()) {
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

void odczytajZPliku() {
    ifstream plik;
    plik.open("wejscia.txt", ios::in);
    if (plik.good()) {
        string imie, nazwisko;
        int wiek, numer_buta;
        while (plik >> imie >> nazwisko >> wiek >> numer_buta) {
            cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << ", Numer buta: " << numer_buta << endl;
        }
        plik.close();
    } else {
        cout << "Nie udalo się otworzyć pliku do odczytu." << endl;
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
    cout << "Dane zostały zapisane do pliku." << endl;

    cout << "Odczytane dane z pliku: " << endl;
    odczytajZPliku();

    return 0;
}