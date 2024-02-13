#include <fstream>
#include <iostream>
using namespace std;

void sprawdz(string nazwiskoDoSprawdzenia)
{
 
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
    string cos;
    fstream plik;
    plik.open("baza.txt", ios::in);
    int i = 0;
    
    if (plik.good() == true)
    {
        i = 0;
        while (!plik.eof())
        {
            plik >> cos;
            i++;
        }
    }
    plik.close();
    
    int k = i / 4;
    
    osoba *baza = new osoba[k]; 
    
    plik.open("baza.txt", ios::in);
    if (plik.good() == true)
    {
        int i = 0;
        while (!plik.eof())
        {
            plik >> baza[i].imie;
            plik >> baza[i].nazwisko;
            plik >> baza[i].wiek;
            plik >> baza[i].nrButa;
            i++;
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
        return 1; 
    }

  
    fstream plik2;
    plik2.open("baza2.txt", ios::out);
    if (plik2.good() == true)
    {

        for (short i = 0; i < k; i++)
        {
            plik2 << baza[i].imie << " ";
            plik2 << baza[i].nazwisko << " ";
            plik2 << baza[i].wiek << " ";
            plik2 << baza[i].nrButa << " ";
            plik2 << endl;
        }
        plik2.close();
        cout << "Zapisano do pliku baza2.txt" << endl;
    }
    else
    {
        cout << "Błąd";
    }

    cout << "starsi niz 12\n";
    for (short i = 0; i < k; i++)
    {
        if (baza[i].wiek > 12)
        {
            cout << baza[i].imie << " ";
            cout << baza[i].nazwisko << " ";
            cout << baza[i].wiek << " ";
            cout << baza[i].nrButa << " ";
            cout << endl;
        }
    }

    delete[] baza; 

    return 0;
}



/*ofstream plik2("baza2.txt");
    if (plik2.is_open())
    {
        
        for (short i = 0; i < k; i++)
        {
            plik2 << baza[i].imie << " ";
            plik2 << baza[i].nazwisko << " ";
            plik2 << baza[i].wiek << " ";
            plik2 << baza[i].nrButa << " ";
            plik2 << endl;
        }
        plik2.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku baza2.txt do zapisu";
        return 1; 
    }

    cout << "Plik baza2.txt zostal utworzony i zapisany z sukcesem." << endl;*/