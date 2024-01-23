#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
        int rozmiar_buta;
    };
  
    osoba persona;
    cout << "Podaj nazwisko ";
    cin >> persona.nazwisko;
    cout << "Podaj imie ";
    cin >> persona.imie;
    cout << "Podaj wiek ";
    cin >> persona.wiek;
    cout << "Podaj numer buta ";
    cin >> persona.rozmiar_buta;

    cout << "Wiek to: "<< persona.wiek;

    return 0;
}
