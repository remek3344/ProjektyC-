#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Czas
{
    int sekundy = 30;
    int minuty = 20;
    int godziny = 5;
};
void CzasOdUżytkownika(Czas &czas)
{
    int jednostka;
    int ilosc;

    cout << "Podaj jednostke czasu\n";
    cout << "1=Sekundy\n2=Minuty\n3=Godziny\n";
    cin >> jednostka;

    cout << "Podaj czas ";
    cin >> ilosc;


    switch (jednostka)
    {
    case 1:
        czas.sekundy += ilosc;
    case 2:
        czas.minuty += ilosc;
    case 3:
        czas.godziny += ilosc;
        break;
    default:
        cout << "Zła jednostka kolego\n";
    }
    
    if(jednostka==1){
        cout << "Sekundy: " << czas.sekundy<<endl<<endl;
    }

    else if(jednostka==2){
        cout << "Minuty: " << czas.minuty << endl;
    }

    else if(jednostka==3){
        cout << "Godziny: " << czas.godziny << endl;
    }

    else{
        cout<<"Zła wartość";
    }
}

int main()
{
    Czas czas;
    CzasOdUżytkownika(czas);
    cout << "Aktualny czas to:" << endl;
    cout << "Sekundy" << czas.sekundy << endl;
    cout << "Minuty" << czas.minuty << endl;
    cout << "Godziny" << czas.godziny << endl;

    
    return 0;
}
