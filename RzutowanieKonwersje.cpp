#include <iostream>
using namespace std;
int main()
{
    char znak = '2';
    char znak1 ='4';
    int liczba, liczba1;
    // string slowo;
    liczba = (int)znak;
    liczba-=48;
    liczba1 =(int)znak1; // rzutowanie typu (konwersja typu)
    // liczba=(int)slowo; // nie wszystko nasz kompilator skonwertuje
    cout << znak<<endl;
    cout << liczba<<endl;
    //pokonwertowac float i inne
    return 0;
}