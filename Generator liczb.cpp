#include <iostream>
using namespace std;
int main()
{
    int x, y;
    srand((unsigned int)time(NULL));
    cout << "Podaj zakres X : ";
    cin >> x;
    cout << "Podaj zakres Y : ";
    cin >> y;
    x = rand() % y;
    cout << "Wylosowana liczba to: " << x << endl;

    return 0;
}