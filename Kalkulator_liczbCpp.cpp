// #include <iostream>
// using namespace std;
// int main()
// {
//     int liczba1, liczba2;
//     cout << "Podaj pierwszą liczbę: ";
//     cin >> liczba1;
    
//     cout << "Podaj drugą liczbe: ";
//     cin >> liczba2;
//     int wynik;

//     wynik = liczba1 & liczba2; 
//     cout << wynik << endl;

//     wynik = liczba1 | liczba2; 
//     cout << wynik << endl;

//     wynik = liczba1 ^ liczba2; 
//     cout << wynik << endl;

//     wynik = ~liczba1; 
//     cout << wynik << endl;

//     wynik = ~liczba2; 
//     cout << wynik << endl;

//     wynik = liczba1 << 2;
//     cout << wynik << endl;

//     wynik = liczba2 << 2;
//     cout << wynik << endl;

//     wynik = liczba1 >> 1; 
//     cout << wynik << endl;

//     wynik = liczba2 >> 1; 
//     cout << wynik << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2;
    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;
    
    cout << "Podaj drugą liczbe: ";
    cin >> liczba2;

    int wynik;

    wynik = liczba1 & liczba2; 
    cout << "Wynik & to: " << wynik << endl;

    wynik = liczba1 | liczba2; 
    cout << "Wynik | to: " << wynik << endl;

    wynik = liczba1 ^ liczba2; 
    cout << "Wynik ^ to: " << wynik << endl;

    wynik = ~liczba1; 
    cout << "Wynik ~ to: " << wynik << endl;

    wynik = ~liczba2; 
    cout << "Wynik ~ to: " << wynik << endl;

    wynik = liczba1 << 2;
    cout << "Wynik << to: " << wynik << endl;

    wynik = liczba2 << 2;
    cout << "Wynik << to: " << wynik << endl;

    wynik = liczba1 >> 1; 
    cout << "Wynik >> to: " << wynik << endl;

    wynik = liczba2 >> 1; 
    cout << "Wynik >> to: " << wynik << endl;
    
    return 0;
}