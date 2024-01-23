#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string nazwisko;
    int index = 0;

    cout << "podaj nazwisko: ";
    cin >> nazwisko;

    fstream plik;
    plik.open("baza.txt", ios::in | ios::app);
    if (plik.good())
    {
        while (!plik.eof())
        {
            string wartosc;
            plik >> wartosc;
            if (index % 4 == 1 && wartosc == nazwisko)
            {
                cout << "znaleziono nazwisko ";
                
                return 0;
            }
            index++;
        }
    }
    else
    {
        cout << "Nie można odnalezc nazwiska";
    }

    return 0;
}