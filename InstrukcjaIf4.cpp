#include <iostream>
using namespace std;
int main() {

    cout << "Podaj liczbe: ";
    int liczba;
    cin >> liczba;


    if (liczba % 3 == 0) {
        cout << liczba << " jest podzielna przez 3." << endl;
    }

    else if (liczba % 2 == 0) {
        cout << liczba << " jest podzielna przez 2." << endl;
    }
   
    else {
        cout << liczba << " nie jest podzielna ani przez 2, ani przez 3." << endl;
    }

    return 0;
}