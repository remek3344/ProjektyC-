#include <iostream>
using namespace std;
void wypelnij(int tablica[], int rozmiar)
{
    cout << "podej rozmiar tablicy do wypełnienia\n";
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}
int main()
{
srand(time(NULL));
int a=rand()%7-3;
cout<<a<<endl;

int b=rand()%21-10;
cout<<b<<endl;

    return 0;
}