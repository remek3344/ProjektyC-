#include <iostream>
using namespace std;

double milimetryNaCentymetry(double milimetry) {
    return milimetry / 10.0;
}

double milimetryNaMetry(double milimetry) {
    return milimetry / 1000.0;
}

double milimetryNaKilometry(double milimetry) {
    return milimetry / 1000000.0;
}

int main() {
    double milimetry;
    int wybor;

    cout << "Podaj dlugosc w milimetrach: ";
    cin >> milimetry;

    cout << "Wybierz, co chcesz obliczyc:" << endl;
    cout << "1. Centymetry" << endl;
    cout << "2. Metry" << endl;
    cout << "3. Kilometry" << endl;
    cout << "Wybor: ";
    cin >> wybor;

    switch (wybor) {
        case 1:
            cout << milimetry << " milimetrów to " << milimetryNaCentymetry(milimetry) << " centymetrów" << endl;
            break;
        case 2:
            cout << milimetry << " milimetrów to " << milimetryNaMetry(milimetry) << " metrów" << endl;
            break;
        case 3:
            cout << milimetry << " milimetrów to " << milimetryNaKilometry(milimetry) << " kilometrów" << endl;
            break;
        default:
            cout << "Niepoprawny wybór" << endl;
            break;
    }

    return 0;
}
/*#include <iostream>
using namespace std;

struct Skala
{
    int cale = 0;
    int stopy = 0;
    int jardy = 0;
    int mile = 0;
};
void konwertujDlugosc(int PodaneCale, Skala &skala)
{
    skala.cale = PodaneCale;
    skala.stopy = PodaneCale / 12;
    skala.jardy = skala.stopy / 3;
    skala.mile = skala.jardy / 1760;
}
void wypisz(Skala skala)
{
    cout << "Cale: " << skala.cale << endl;
    cout << "Stopy: " << skala.stopy << endl;
    cout << "Jardy: " << skala.jardy << endl;
    cout << "Mile: " << skala.mile << endl;
}
int main()
{
    int iloscCali;
    cout << "Podaj długość w calach: ";
    cin >> iloscCali;

    Skala konwersja;
    konwertujDlugosc(iloscCali, konwersja);
    wypisz(konwersja);

    return 0;
}*/
/*#include <iostream>
using namespace std;
void obliczanieCzasu(int czasWSekundach)
{
    int czasGodziny = 0;
    int czasMinuty = 0;
    int czasSekundy = 0;
    czasGodziny = czasWSekundach / 3600;
    czasWSekundach = czasWSekundach % 3600;
    czasMinuty = czasWSekundach / 60;
    czasWSekundach = czasWSekundach % 60;
    czasSekundy = czasWSekundach;
    cout << "Godziny: " << czasGodziny << endl;
    cout << "Minuty: " << czasMinuty << endl;
    cout << "Sekundy: " << czasSekundy << endl;
}
int main()
{
    int podanyCzas = 0;
    cout << "Podaj czas w sekundach a ja powiem ile jest godzin, minut i sekund" << endl;
    cin >> podanyCzas;
    obliczanieCzasu(podanyCzas);
    return 0;
}*/

/*#include <iostream>
using namespace std;

struct Pojemnosc
{
    double litry;
    double galony;
    double kwarty;
    double pinte;
    double bushle;
    double cm3;
    double dm3;
    double m3;
};

void konwertujPlyn(double iloscLitrow, Pojemnosc &pojemnosc)
{
    pojemnosc.litry = iloscLitrow;
    pojemnosc.galony = iloscLitrow / 3.78541;
    pojemnosc.kwarty = pojemnosc.galony * 4;
    pojemnosc.pinte = iloscLitrow * 2.11338;
    pojemnosc.bushle = pojemnosc.galony / 8;
    pojemnosc.cm3 = iloscLitrow * 1000;
    pojemnosc.dm3 = iloscLitrow * 0.001;
    pojemnosc.m3 = iloscLitrow * 0.000001;
}

void wypisz(Pojemnosc pojemnosc)
{
    cout << "Litrów: " << pojemnosc.litry << endl;
    cout << "Galony: " << pojemnosc.galony << endl;
    cout << "Kwarty: " << pojemnosc.kwarty << endl;
    cout << "Pinty: " << pojemnosc.pinte << endl;
    cout << "Bushle: " << pojemnosc.bushle << endl;
    cout << "Centymetrów sześciennych: " << pojemnosc.cm3 << endl;
    cout << "Decymetrów sześciennych: " << pojemnosc.dm3 << endl;
    cout << "Metrów sześciennych: " << pojemnosc.m3 << endl;
}

int main()
{
    double iloscLitrow;
    cout << "Podaj ilość płynu w litrach: ";
    cin >> iloscLitrow;

    Pojemnosc konwersja;
    konwertujPlyn(iloscLitrow, konwersja);
    wypisz(konwersja);

    return 0;
}*/




/*#include <iostream>
using namespace std;
struct czas
{
   int sekundy;
   int minuty;
   int godziny;
};
void obliczanieCzasu(int czasWSekundach, czas &czas)
{
   int czasGodziny = 0;
   int czasMinuty = 0;
   int czasSekundy = 0;
   czasGodziny = czasWSekundach / 3600;
   czasWSekundach = czasWSekundach % 3600;
   czasMinuty = czasWSekundach / 60;
   czasWSekundach = czasWSekundach % 60;
   czasSekundy = czasWSekundach;
   cout << "Godziny: " << czasGodziny << endl;
   cout << "Minuty: " << czasMinuty << endl;
   cout << "Sekundy: " << czasSekundy << endl;
   czas.sekundy = czasSekundy;
   czas.minuty = czasMinuty;
   czas.godziny = czasGodziny;
}
void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
   int czasGodziny = 0;
   int czasMinuty = 0;
   int czasSekundy = 0;
   czasGodziny = staryCzas.godziny + nowyCzas.godziny;
   czasMinuty = staryCzas.minuty + nowyCzas.minuty;
   czasSekundy = staryCzas.sekundy + nowyCzas.sekundy;
   if (czasSekundy > 59)
   {
      czasMinuty += czasSekundy / 60;
      czasSekundy = czasSekundy % 60;
   }
   if (czasMinuty > 59)
   {
      czasGodziny += czasMinuty / 60;
      czasMinuty = czasMinuty % 60;
   }
   if (czasGodziny > 23)
   {

      czasGodziny = czasGodziny % 24;
   }
   nowyCzas.sekundy = czasSekundy;
   nowyCzas.minuty = czasMinuty;
   nowyCzas.godziny = czasGodziny;
}
void wypisz(czas timex){
   cout<<timex.sekundy<<endl;
   cout<<timex.minuty<<endl;
   cout<<timex.godziny<<endl;
}
int main(){
int sekundyOdUzytkownika;
czas staryCzas{59,59,23},nowyCzas;
cout<<"podaj ile sekund dołożyć";
cin>>sekundyOdUzytkownika;
obliczanieCzasu(sekundyOdUzytkownika,nowyCzas);
dodajCzas(nowyCzas,staryCzas);
wypisz(nowyCzas);
return 0;
}*/

/*#include <iostream>
using namespace std;
void wypisz(int tab[2][3])
{
  for (short i = 0; i < 2; i++)
  {
    for (short j = 0; j < 3; j++)
    {
      cout << tab[i][j] << " ";
    }
    cout << endl;
  }
}
void wypelnij(int tab[2][3])
{
  {
    for (int i = 0; i < 2; i++)
    {
      srand((i + 1) * time(NULL));
      for (short j = 0; j < 3; j++)
      {
        tab[i][j] = rand() % 11;
      }
    }
  }
}
int main()
{
  int tablica[2][3];
  int tablica1[2][3] = {1, 2, 1, 2, 3, 4};
  wypelnij(tablica);
  wypisz(tablica1);
  return 0;
}*/

/*#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string a;
    string b;
    int c;
    int d;
    cout << "Podaj swoje imie: " << endl;
    cin >> a;
    cout << "Podaj swoje nazwisko: "<<endl;
    cin >> b;
    cout << "Podaj swój wiek: "<<endl;
    cin >> c;
    cout << "Podaj swój numer buta: "<<endl;
    cin >> d;

    fstream plik;
    plik.open("wejscia.txt", ios::out | ios::app );
    if(plik.good() == true)
    {
        plik<<a<<" ";
        plik<<b<<" ";
        plik<<c<<" ";
        plik<<d<<" ";
        plik<<endl;
        plik.close();
    }
    else
    {
        cout<<"Nie udalo się otworzyć";
    }
    
    return 0;
}*/

/*#include <iostream>
using namespace std;

struct Czas
{
    int godziny;
    int minuty;
    int sekundy;
};

void odejmijSekundy(Czas &biezacyCzas, int sekundyDoOdjecia)
{
    int LiczbaSekund = biezacyCzas.godziny * 3600 + biezacyCzas.minuty * 60 + biezacyCzas.sekundy;
    LiczbaSekund -= sekundyDoOdjecia;

    if (LiczbaSekund < 0)
    {
        cout << "Nie można odjąć więcej sekund niż jest dostępnych." << endl;
        return;
    }

    biezacyCzas.godziny = LiczbaSekund / 3600;
    LiczbaSekund %= 3600;
    biezacyCzas.minuty = LiczbaSekund / 60;
    biezacyCzas.sekundy = LiczbaSekund % 60;
}

int main()
{

    Czas biezacyCzas = {5, 30, 40};

    int sekundyDoOdjecia;
    cout << "Podaj liczbę sekund do odjęcia: ";
    cin >> sekundyDoOdjecia;

    odejmijSekundy(biezacyCzas, sekundyDoOdjecia);
    cout << "Po odjęciu " << sekundyDoOdjecia << " sekund, aktualny czas to: ";
    cout << biezacyCzas.godziny << " godzin, " << biezacyCzas.minuty << " minut, " << biezacyCzas.sekundy << " sekund." << endl;

    return 0;
}*/

/*#include <iostream>
using namespace std;
void obliczanieCzasu(int czasWSekundach)
{
    int czasGodziny = 0;
    int czasMinuty = 0;
    int czasSekundy = 0;
    czasGodziny = czasWSekundach / 3600;
    czasWSekundach = czasWSekundach % 3600;
    czasMinuty = czasWSekundach / 60;
    czasWSekundach = czasWSekundach % 60;
    czasSekundy = czasWSekundach;
    cout << "Godziny: " << czasGodziny << endl;
    cout << "Minuty: " << czasMinuty << endl;
    cout << "Sekundy: " << czasSekundy << endl;
}
int main()
{
    int podanyCzas = 0;
    cout << "Podaj czas w sekundach a ja powiem ile jest godzin, minut i sekund" << endl;
    cin >> podanyCzas;
    obliczanieCzasu(podanyCzas);
    return 0;
}*/

/*
#include <iostream>
using namespace std;

struct czas
{
    int dni;
    int tygodnie;
    int miesiace;
    int lata;
};

void obliczanieCzasu(int dni, czas &wynik)
{
    wynik.dni = dni;
    wynik.tygodnie = dni / 7;
    wynik.miesiace = dni / 30;
    wynik.lata = dni / 360;
}

void wypisz(czas wynik)
{
    cout << "Dni: " << wynik.dni << endl;
    cout << "Tygodnie: " << wynik.tygodnie << endl;
    cout << "Miesiące: " << wynik.miesiace << endl;
    cout << "Lata: " << wynik.lata << endl;
}

int main()
{
    int dniOdUzytkownika;
    cout << "Podaj liczbę dni: ";
    cin >> dniOdUzytkownika;

    czas wynik;
    obliczanieCzasu(dniOdUzytkownika, wynik);
    wypisz(wynik);

    return 0;
*/

/*#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
struct Tablica {
    int dane[11];
    int rozmiar;
};
void wypelnijTablice(Tablica &tablica) {
    for (int i = 0; i < tablica.rozmiar; ++i) {
        tablica.dane[i] = rand() % 11 + 10;
    }
}
int znajdzMinPodzielnaPrzezTrzy(const Tablica &tablica) {
    int minPodzielnaPrzezTrzy = INT_MAX; // 

    for (int i = 0; i < tablica.rozmiar; ++i) {
        if (tablica.dane[i] % 3 == 0 && tablica.dane[i] < minPodzielnaPrzezTrzy) {
            minPodzielnaPrzezTrzy = tablica.dane[i];
        }
    }

    return minPodzielnaPrzezTrzy;
}

int main() {
    srand(time(NULL)); 

    Tablica mojaTablica;
    mojaTablica.rozmiar = 11;

    wypelnijTablice(mojaTablica);

    cout << "Wygenerowane liczby: ";
    for (int i = 0; i < mojaTablica.rozmiar; ++i) {
        cout << mojaTablica.dane[i] << " ";
    }
    cout << endl;

    int minPodzielnaPrzezTrzy = znajdzMinPodzielnaPrzezTrzy(mojaTablica);

    if (minPodzielnaPrzezTrzy != INT_MAX) {
        cout << "Najmniejsza liczba podzielna przez 3 w tablicy: " << minPodzielnaPrzezTrzy << endl;
    } else {
        cout << "Brak liczb podzielnych przez 3 w tablicy." << endl;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;
struct woda
{
   int litry;
   int galony;
   int wanny;
   int cysterny;
};
void obliczanieLitrow(int iloscWlitrach, woda &woda)
{
   int iloscWanien = 0;
   int iloscGalonow = 0;
   int iloscLitrow = 0;
   int iloscCystern = 0;
   iloscCystern = iloscWlitrach / 1000;
   iloscWlitrach = iloscWlitrach % 1000;
   iloscWanien = iloscWlitrach / 200;
   iloscWlitrach = iloscWlitrach % 200;
   iloscGalonow = iloscWlitrach / 5;
   iloscWlitrach = iloscWlitrach % 5;
   iloscLitrow = iloscWlitrach;
    cout << "cysterny: " << iloscCystern << endl;
   cout << "wanny: " << iloscWanien << endl;
   cout << "galony: " << iloscGalonow << endl;
   cout << "litry: " << iloscLitrow << endl;
   woda.litry = iloscLitrow;
   woda.galony = iloscGalonow;
   woda.wanny = iloscWanien;
   woda.cysterny = iloscCystern;
}
void dodajLitry(woda &nowaIlosc, woda &staraIlosc)
{
   int iloscCystern = 0; 
   int iloscWanien = 0;
   int iloscGalonow = 0;
   int iloscLitrow = 0;
   iloscWanien = staraIlosc.wanny + nowaIlosc.wanny;
   iloscGalonow = staraIlosc.galony + nowaIlosc.galony;
   iloscLitrow = staraIlosc.litry + nowaIlosc.litry;
   iloscCystern = staraIlosc.cysterny + nowaIlosc.cysterny;
   if (iloscLitrow > 4)
   {
      iloscGalonow += iloscLitrow / 5;
      iloscLitrow = iloscLitrow % 5;
   }
   if (iloscGalonow > 39)
   {
      iloscWanien += iloscGalonow / 200;
      iloscGalonow = iloscGalonow % 200;
   }
   if (iloscWanien > 4)
   {
      iloscCystern += iloscWanien / 1000;
      iloscWanien = iloscWanien % 1000;
   }
   
   nowaIlosc.litry = iloscLitrow;
   nowaIlosc.galony = iloscGalonow;
   nowaIlosc.wanny = iloscWanien;
   nowaIlosc.cysterny = iloscCystern;
}
void wypisz(woda timex){
   cout<<timex.litry<<endl;
   cout<<timex.galony<<endl;
   cout<<timex.wanny<<endl;
   cout<<timex.cysterny<<endl;
}
int main(){
int litryOdUzytkownika;
woda staraIlosc{4,40,5},nowaIlosc;
cout<<"podaj ile litrów dołożyć\n";
cin>>litryOdUzytkownika;
obliczanieLitrow(litryOdUzytkownika,nowaIlosc);
dodajLitry(nowaIlosc,staraIlosc);
wypisz(nowaIlosc);
return 0;
}*/


/*#include <iostream>

using namespace std;

struct Dlugosc {
    int cale;
    int stopy;
    int yardy;
    int mile;
};

void przelicz(Dlugosc& dlugosc) {
    dlugosc.stopy = dlugosc.cale / 12.0;
    dlugosc.yardy = dlugosc.cale / 36.0;
    dlugosc.mile = dlugosc.cale / 63360.0;
}

void wyswietl(Dlugosc& dlugosc) {
    cout << "Cale: " << dlugosc.cale << endl;
    cout << "Stopy: " << dlugosc.stopy << endl;
    cout << "Yardy: " << dlugosc.yardy << endl;
    cout << "Mile: " << dlugosc.mile << endl;
}

int main() {
    Dlugosc dlugosc;

    cout << "Podaj dlugosc w calach: ";
    cin >> dlugosc.cale;

    przelicz(dlugosc);
    wyswietl(dlugosc);

    return 0;
}*/