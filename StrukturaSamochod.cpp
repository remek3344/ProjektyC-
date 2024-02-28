#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Samochod {
    string kolor;
    string marka;
    int rokProdukcji;
    double spalanie;
};

void dodajSamochod(Samochod baza[], int& rozmiar) {
    if (rozmiar < 4) {
        cout << "Podaj kolor samochodu: ";
        cin >> baza[rozmiar].kolor;
        cout << "Podaj marke samochodu: ";
        cin >> baza[rozmiar].marka;
        cout << "Podaj rok produkcji: ";
        cin >> baza[rozmiar].rokProdukcji;
        cout << "Podaj spalanie (l/100km): ";
        cin >> baza[rozmiar].spalanie;
        rozmiar++;
    } else {
        cout << "Baza samochodow jest pelna." << endl;
    }
}

void zapiszDoPliku(Samochod baza[], int rozmiar) {
    ofstream plik("baza_samochodow.txt");
    if (plik.is_open()) {
        for (int i = 0; i < rozmiar; ++i) {
            plik << "Kolor: " << baza[i].kolor << ", Marka: " << baza[i].marka << ", Rok produkcji: " << baza[i].rokProdukcji << ", Spalanie: " << baza[i].spalanie << " l/100km" << endl;
        }
        plik.close();
        cout << "Baza samochodow zostala zapisana do pliku." << endl;
    } else {
        cout << "Blad: Nie udalo sie otworzyc pliku do zapisu." << endl;
    }
}

void wyszukajPoKolorze(Samochod baza[], int rozmiar, string kolor) {
    bool znaleziono = false;
    for (int i = 0; i < rozmiar; ++i) {
        if (baza[i].kolor == kolor) {
            cout << "Znaleziono samochod o kolorze " << kolor << ": Marka: " << baza[i].marka << ", Rok produkcji: " << baza[i].rokProdukcji << ", Spalanie: " << baza[i].spalanie << " l/100km" << endl;
            znaleziono = true;
        }
    }
    if (!znaleziono) {
        cout << "Nie znaleziono samochodu o podanym kolorze." << endl;
    }
}

int main() {
    Samochod* baza = new Samochod[4];
    int rozmiar = 0;
    char wybor;
    
    do {
        cout << "Menu:" << endl;
        cout << "1. Dodaj samochod do bazy" << endl;
        cout << "2. Zapisz baze samochodow do pliku" << endl;
        cout << "3. Wyszukaj samochody po kolorze" << endl;
        cout << "4. Zakoncz program" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
        
        switch (wybor) {
            case '1':
                dodajSamochod(baza, rozmiar);
                break;
            case '2':
                zapiszDoPliku(baza, rozmiar);
                break;
            case '3': {
                string kolor;
                cout << "Podaj kolor do wyszukania: ";
                cin >> kolor;
                wyszukajPoKolorze(baza, rozmiar, kolor);
                break;
            }
            case '4':
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawna opcja." << endl;
                break;
        }
    } while (wybor != '4');

    delete[] baza;
    return 0;
}