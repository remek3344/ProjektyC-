#include <iostream>
#include <vector>
#include <ctime>
#include "maxMin.cpp"
using namespace std;

int znajdzMinStatyczna(int tablica[], int rozmiar);
int znajdzMaxStatyczna(int tablica[], int rozmiar);
int znajdzMinDynamiczna(int *tablica, int rozmiar);
int znajdzMaxDynamiczna(int *tablica, int rozmiar);
int znajdzMinWektor(vector<int> &wektor);
int znajdzMaxWektor(vector<int> &wektor);
void wypelnij(int tablica[], int rozmiar);
void wypisz( int tablica[], int rozmiar);