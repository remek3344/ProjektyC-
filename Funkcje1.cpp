#include <iostream>
using namespace std;

int resztaZDzielenia(int dzielna, int dzielnik) {
    if (dzielnik == 0) {
        cout << "Blad: Dzielnik nie moze byc zerem." << endl;
       
    }

    return dzielna % dzielnik;
}

int main() {
    
    int liczba1 = 17;
    int liczba2 = 5;

    int reszta = resztaZDzielenia(liczba1, liczba2);

    cout << "Reszta z dzielenia " << liczba1 << " przez " << liczba2 << " wynosi: " << reszta << endl;

    return 0;
}