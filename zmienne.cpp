#include <iostream>
using namespace std; 

int main() { 
//stosujemy znaczące nazwy zmiennych    
// typ zmiennej określa jak traktuje ją kompilator przykład:
string napis1 ="3";
string napis2 ="3";
string suma= napis1+napis2 ; //konkatenacja stringów
cout<<suma<<endl;

int liczba1 =3;
int liczba2=3;
int sumaLiczb= liczba1+liczba2 ; //dodawanie liczb
cout<<sumaLiczb<<endl;

//typ zmiennej określa rozmiar pamięci który na jej obsługę przeznaczy kompilator
cout<<sizeof(int)<<endl;
cout<<sizeof(char)<<endl;
cout<<sizeof(bool)<<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(double)<<endl;

//deklaracja zmiennej to określenie nazwy zmiennej i typu przechowywanej wartości

return 0;
}