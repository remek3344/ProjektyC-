#include <iostream>
using namespace std;
int main() {
    
    int liczba1, liczba2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    
    int wynik_AND = liczba1 & liczba2;
    int wynik_OR = liczba1 | liczba2;
    int wynik_XOR = liczba1 ^ liczba2;

 
    cout << liczba1 << " & " << liczba2 << " = " << wynik_AND <<endl;
    cout << liczba1 << " | " << liczba2 << " = " << wynik_OR <<endl;
    cout << liczba1 << " ^ " << liczba2 << " = " << wynik_XOR <<endl;

    return 0;
}