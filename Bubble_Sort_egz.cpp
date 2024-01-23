#include <iostream>
using namespace std;

int main()
{

    int tab[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        tab[i] = rand() % 100;
    }
    cout << "nieposortowane liczby: " << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << tab[i] << ",";
    }
    cout<<endl;
    for (int j = 0; j < 99; j++)
    {
        int temp, i;
        for (int i = 0; i < 99 - j; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                int temp;
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
        }
    }
    cout << "Posortowane liczby: " << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << tab[i] << ",";
    }
    cout << endl
         << RAND_MAX;

    return 0;
}