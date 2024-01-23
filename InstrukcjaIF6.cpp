#include <iostream>
using namespace std;
int main() {

    double liczba1, liczba2;

    
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    //Ten program używa nieskończonej pętli (for (;;)) do ciągłego pytania użytkownika o 2 liczbę, dopóki ta nie będzie różna od zera. 
    for (;;) {
        cout << "Podaj druga liczbe: ";
        cin >> liczba2;

       
        if (liczba2 != 0) {
            break; 
        } else {
            cout << "Blad! Druga liczba nie moze byc zerem. Sprobuj ponownie." << endl;
        }
    }

    double wynik = liczba1 / liczba2;
    cout << "Wynik dzielenia: " << wynik << endl;

    return 0;
}