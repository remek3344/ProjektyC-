#include <iostream>
using namespace std;
int main() {
int wiek ;
cout<<"podaj wiek a powiem czy jesteś stary czy nie"<<endl;
cin>>wiek;
cout << "Twój wiek = " << wiek << endl;
string znak;
if (wiek >50) znak = "jesteś stary";
else if(wiek<50) znak="jesteś młody";
else znak="bedziesz stary";
cout << znak << endl;
return 0;
}