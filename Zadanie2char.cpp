#include <iostream>
using namespace std;
int main()
{
    char znak;
    char znak2;
    cout<<"podaj pierwszą liczbę"<<endl;
    cin>>znak;
    cout<<"podaj drugą liczbę"<<endl;
    cin>>znak2;
    int liczba, liczba1;
    
    liczba = (int)znak;
    liczba-=48;
    cout << znak<<endl;
    cout << liczba<<endl;
    return 0;
}