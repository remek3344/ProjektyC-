#include <iostream>
using namespace std;
int main() {
    int liczba;
    int suma_parzystych = 0;
    int suma_nieparzystych = 0;

    for (int liczba = 1; liczba <= 100; liczba++) {
        if (liczba % 2 == 0) {
            suma_parzystych += liczba;
        } else {
            suma_nieparzystych += liczba;
        }
    }

    cout << "Suma liczb parzystych: " << suma_parzystych <<endl;
    cout << "Suma liczb nieparzystych: " << suma_nieparzystych <<endl;

    return 0;
}