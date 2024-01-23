#include <iostream>
using namespace std;
int main()
{
  int wiek;
  cout << "podaj wiek" << endl;
  cin >> wiek;
  wiek >= 60 ? cout << "jestes stary " : cout << "jestes mlody";
}