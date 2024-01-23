#include <iostream>
using namespace std;
int main() {
    
    double liczba1, liczba2;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    do {
        cout << "Podaj druga liczbe ";
        cin >> liczba2;

       
        if (liczba2 == 0) {
            cout << "Blad! Druga liczba nie moze byc zerem. Sprobuj ponownie." << endl;
        }
    } while (liczba2 == 0);

    double wynik = liczba1 / liczba2;
    cout << "Wynik dzielenia: " << wynik << endl;

    return 0;
}