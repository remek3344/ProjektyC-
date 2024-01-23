#include <iostream>
using namespace std;

int main()
{
    //konwersja char-int
    char znak1, znak2;
    int liczba1, liczba2;

    cout << "Podaj pierwsza liczbe: ";
    cin >> znak1;
    liczba1 = (int)znak1 - 48;

    cout << "Podaj druga liczbe: ";
    cin >> znak2;
    liczba2 = (int)znak2 - 48;

    int suma = liczba1 + liczba2;
    int roznica = liczba1 - liczba2;
    int iloczyn = liczba1 * liczba2;
    float iloraz = (float)liczba1 / liczba2; // Konwersja do float dla dokładności dzielenia

    cout << "Wynik dodawania: " << liczba1 << " + " << liczba2 << " = " << suma << endl;
    cout << "Wynik odejmowania: " << liczba1 << " - " << liczba2 << " = " << roznica << endl;
    cout << "Wynik mnozenia: " << liczba1 << " * " << liczba2 << " = " << iloczyn << endl;
    cout << "Wynik dzielenia: " << liczba1 << " / " << liczba2 << " = " << iloraz << endl;

    return 0;
}