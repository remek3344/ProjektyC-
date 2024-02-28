#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
    int numer_buta;
};

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
    cout << "Odczytane dane z pliku: " << endl;
    odczytajZPliku();

    return 0;
}