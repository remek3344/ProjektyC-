
#include <iostream>
using namespace std;

struct Skala
{
    int piedz= 0;
    int lokiec = 0;
    int sazen = 0;
    int wiorsta = 0;
};
void konwertujDlugosc(int Podanepiedzie, Skala &skala)
{
    skala.wiorsta = Podanepiedzie / 500;
    Podanepiedzie = Podanepiedzie % 500;
    skala.sazen = Podanepiedzie / 9;
    Podanepiedzie = Podanepiedzie % 9;
    skala.lokiec = Podanepiedzie / 3;
    Podanepiedzie = Podanepiedzie % 3;
    skala.piedz = Podanepiedzie;
}
void wypisz(Skala skala)
{
    cout << "Piedzie: " << skala.piedz<< endl;
    cout << "Lokcie: " << skala.lokiec << endl;
    cout << "Saznie: " << skala.sazen << endl;
    cout << "Wiorsta: " << skala.wiorsta << endl;
}
int main()
{
    int iloscCali;
    cout << "Podaj długość w piedziach : ";
    cin >> iloscCali;

    Skala konwersja;
    konwertujDlugosc(iloscCali, konwersja);
    wypisz(konwersja);

    return 0;
}