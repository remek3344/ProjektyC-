#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string imie;
    string nazwisko;
    int wiek;
    int rozmiar_buta;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << "Podaj wiek: ";
    cin >> wiek;

    cout << "Podaj rozmiar buta: ";
    cin >> rozmiar_buta;

    fstream plik;
    plik.open("baza.txt", ios::out | ios::app);
    if (plik.good() == true)
    {
        plik << imie << " ";
        plik << nazwisko << " ";
        plik << rozmiar_buta << " ";
        plik << wiek << " ";
        plik << endl;

        plik.close();
    }
    else
    {
        cout << "Nie udao sie otworzc pliku";
    }

    return 0;
}
