#include <iostream>

struct Czas {
    int dni;
    int tygodnie;
    int miesiace;
    int lata;
};

void obliczeniaCzasu() {
    using namespace std; 

    Czas czas;

 
    cout << "Podaj ilość dni: ";
    cin >> czas.dni;

  
    czas.tygodnie = czas.dni / 7;
    czas.miesiace = czas.dni / 30;
    czas.lata = czas.dni / 360;

    cout << "To jest równowartość:\n";
    cout << "Tygodni: " << czas.tygodnie << "\n";
    cout << "Miesięcy: " << czas.miesiace << "\n";
    cout << "Lat: " << czas.lata << "\n";
}

int main() {
    obliczeniaCzasu();
    return 0;
}