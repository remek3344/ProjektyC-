#include <iostream>


using namespace std;

double losujLiczbeRzeczywista()
{
    return -3.0 + double(rand()) / RAND_MAX * 7.0;
}

int main()
{
    srand(time(NULL));

    double losowaLiczba = losujLiczbeRzeczywista();

    cout << "Wylosowana liczba rzeczywista: " << losowaLiczba << endl;

    return 0;
} 