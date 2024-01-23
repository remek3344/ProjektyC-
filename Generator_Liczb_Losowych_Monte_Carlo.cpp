#include <iostream>
#include <cmath>

using namespace std;

double losowaLiczba() {
    return rand() / (double)RAND_MAX;
}

double estymujLiczbePi(int liczbaPunktow) {
    int wewnatrzKola = 0;
    int i = 0;

    while (i < liczbaPunktow) {
        double x = losowaLiczba();
        double y = losowaLiczba();
        double odleglosc = x * x + y * y;

        if (odleglosc <= 1) {
            wewnatrzKola++;
        }

        i++;
    }

    double oszacowanaPi = (wewnatrzKola / (double)liczbaPunktow) * 4;
    return oszacowanaPi;
}

double estymujPrawdopodobienstwoWPunkcie(int liczbaPunktow, double q) {
    int wRegionie = 0;
    double celX = 0.5, celY = 0.5;
    int i = 0;

    while (i < liczbaPunktow) {
        double x = losowaLiczba();
        double y = losowaLiczba();

        if (celX - 1.0 / 4 <= x && x <= celX + 1.0 / 4 && celY - 1.0 / 4 <= y && y <= celY + 1.0 / 4) {
            wRegionie++;
        }

        i++;
    }

    double prawdopodobienstwo = (wRegionie / (double)liczbaPunktow);
    return prawdopodobienstwo;
}

int main() {
    srand(time(0));

    int liczbaPunktow = 100;
    double wynikPi = estymujLiczbePi(liczbaPunktow);
    double wynikPrawdopodobienstwa = estymujPrawdopodobienstwoWPunkcie(liczbaPunktow, 1.0 / 4);

    cout << "Estymacja wartości liczby π: " << wynikPi << endl;
    cout << "Prawdopodobieństwo w punkcie (1/2, 1/2) dla obszaru 1/4 π: " << wynikPrawdopodobienstwa << endl;

    return 0;
}