#include <fstream>
#include <iostream>
using namespace std;

void sprawdz(string nazwiskoDoSprawdzenia)
{
    string nazwisko, imie;
    int index = 1;
    bool czyJest = false; 
    fstream plik;
    plik.open("bazaPelna1.txt", ios::in);
    if (plik.good())
    {
        while (plik >> imie >> nazwisko) 
        {
            if (nazwisko == nazwiskoDoSprawdzenia)
            {
                czyJest = true;
                cout << imie << " " << nazwisko << " ";
                int wiek, numerButa;
                plik >> wiek >> numerButa;
                cout << wiek << " " << numerButa << endl;
            }
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
    }

    if (!czyJest)
    {
        cout << "Nikogo nie ma" << endl;
    }
}

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    int nrButa;
};

int main()
{
    int podana1;
    cout << "Podaj 1, aby umożliwić dodanie nowego elementu: ";
    cin >> podana1;
    if (podana1 == 1)
    {
        string imie, nazwisko;
        int wiek, numerButa;
        cout << "Podaj imie, nazwisko, wiek i numer buta: ";
        cin >> imie >> nazwisko >> wiek >> numerButa;
        fstream plik;
        plik.open("bazaPelna1.txt", ios::out | ios::app);
        if (plik.good())
        {
            plik << imie << " " << nazwisko << " " << wiek << " " << numerButa << endl;
            plik.close();
        }
        else
        {
            cout << "Nie udalo sie otworzyc pliku";
            return 1; 
        }
    }

    fstream plik;
    plik.open("bazaPelna1.txt", ios::in);
    if (plik.good())
    {
        int liczbaOsob = 0;
        string temp;
        while (plik >> temp) 
        {
            liczbaOsob++;
        }
        plik.clear(); 
        plik.seekg(0, ios::beg); 

        osoba *baza = new osoba[liczbaOsob / 4]; 

        for (int i = 0; i < liczbaOsob / 4; i++)
        {
            plik >> baza[i].imie >> baza[i].nazwisko >> baza[i].wiek >> baza[i].nrButa;
        }

        cout << "Dane z pliku: " << endl;
        for (int i = 0; i < liczbaOsob / 4; i++)
        {
            cout << baza[i].imie << " " << baza[i].nazwisko << " " << baza[i].wiek << " " << baza[i].nrButa << endl;
        }

        delete[] baza; 
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
        return 1; 
    }

    sprawdz("Kowalski");

    return 0;
}
