#include <iostream>
using namespace std;
int main()
{
    float liczba1, liczba2;

        cout << "Podaj pierwszą liczbę: ";
        cin >> liczba1;

        cout << "Podaj drugą liczbę: ";
        cin >> liczba2;
        
        while (liczba2 == 0)
        {
            cout << "Druga liczba nie może być zero. Podaj inną wartość." << endl;
            cin>>liczba2;
        }
         cout << "Wynik to : " << liczba1/liczba2<<endl;
    return 0;
   
}