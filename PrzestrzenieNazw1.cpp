#include <iostream>
using namespace std;
namespace dawneMiary {
    const float sazen = 1.8;
}

int main() {
    double wzrostCM;
    cout << "Podaj swój wzrost w centymetrach: ";
    cin >> wzrostCM;

    // Konwersja wzrostu z centymetrów na sążnie
    double wzrostSazenie = wzrostCM / dawneMiary::sazen;
    cout << "Twój wzrost w sążniach wynosi: " << wzrostSazenie << " sążeni " <<endl;

    return 0;
}