#include <iostream>
using namespace std;
int main() {
    
    int liczba1, liczba2;
    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;
    
    cout << "Podaj drugą liczbe: ";
    cin >> liczba2;

    
    int wynik_and = liczba1 & liczba2;
    int wynik_or = liczba1 | liczba2;
    int wynik_xor = liczba1 ^ liczba2;

   
    int przesuniecie_2_bity_1 = liczba1 >> 2;
    int przesuniecie_2_bity_2 = liczba2 >> 2;

  
    cout << liczba1 << " & " << liczba2 << " = " << wynik_and << endl;
    cout << liczba1 << " | " << liczba2 << " = " << wynik_or <<endl;
    cout << liczba1 << " ^ " << liczba2 << " = " << wynik_xor << endl;
    cout << "Przesunięcie " << liczba1 << " o 2 bity w prawo: " << przesuniecie_2_bity_1 << endl;
    cout << "Przesunięcie " << liczba2 << " o 2 bity w prawo: " << przesuniecie_2_bity_2 << endl;

    return 0;
}