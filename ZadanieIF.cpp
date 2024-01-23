#include <iostream>
using namespace std;
int main() {
int liczba ;
cout << "Podaj liczbe, jesli jest dodatnia lub zerowa wypisze 0 a jesli ujemna to 1" << endl;
cin>>liczba;
cout << "Liczba = " << liczba << endl;
int wartosc=17;
// Zastosowanie instrukcji warunkowych:
if (liczba < 0){
wartosc = 0;
cout<<"podales liczbe ujemna"<<endl;
}//do ifa jest przyklejona tylko następna jedna instrukcja.
// Jak chcesz przykleić więcej to musisz zrobić blok z nawiasów klamrowych
else  wartosc=1;
cout << "wartosc funkcji: " << wartosc << endl;
return 0;
}