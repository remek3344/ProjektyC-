

#include <iostream>
using namespace std;

struct Skala
{
    int piedz= 0;
    int lokiec = 0;
    int sazen = 0;
    int wiorsta = 0;
};
void konwertujDlugosc(int PodaneCale, Skala &skala)
{
    skala.wiorsta = PodaneCale / 500;
    PodaneCale = PodaneCale % 500;
    skala.sazen = PodaneCale / 9;
    PodaneCale = PodaneCale %  9;
    skala.lokiec = PodaneCale / 3;
    PodaneCale = PodaneCale % 3;
    skala.piedz = PodaneCale;
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