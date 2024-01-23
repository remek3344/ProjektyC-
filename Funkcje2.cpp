#include <iostream>

using namespace std;

void Znak(char znak, int liczba)
{
    for (int i = 0; i < liczba; ++i)
    {
        cout << znak;
    }
    cout << endl;
}

int main()
{
    char znak;
    int liczba;

    cout << "Podaj znak: ";
    cin >> znak;

    cout << "Podaj liczbe: ";
    cin >> liczba;

     Znak(znak, liczba);

    return 0;
}