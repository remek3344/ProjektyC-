#include <iostream>
using namespace std;
int main() {
    int wiek;

    
    cout << "Podaj swoj wiek: ";
    cin >> wiek;

  
    if (wiek <= 20) {
        cout << "Jestes zoomer." <<endl;
    } else if (wiek <= 60) {
        cout << "Jestes x-gen." <<endl;
    } else {
        cout << "Jestes boomer." <<endl;
    }

    return 0;
}