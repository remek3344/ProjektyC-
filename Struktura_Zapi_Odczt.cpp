#include <iostream>
#include <fstream>
using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    int rozmiar_buta;
    int wyjscie;
};
int main()
{

    osoba baza[100];

    fstream plik;
    plik.open("baza.txt", ios::in);
    if (plik.good() == true)
    {
        int i = 0;
        while (!plik.eof())

        {
            plik >>baza[i].imie;
            plik >>baza[i].nazwisko;
            plik >>baza[i].wiek;
            plik >>baza[i].rozmiar_buta;
            i++;
        }
    }
    else
    {
        cout << "Nie udało sie otworzyć pliku";
    }
    plik.close();

        for (int i = 0; i < 3; i++)
        {
            plik >> baza[i].imie;
            plik >> baza[i].nazwisko;
            plik >> baza[i].wiek;
            plik >> baza[i].rozmiar_buta;
            cout << endl;
        }

        if(baza[i].wiek>12)
        {
             cout>>baza[i].imie;
            cout >>baza[i].nazwisko;
            cout>>baza[i].wiek;
            cout >>baza[i].rozmiar_buta;
        }

        


    
    return 0;
}
