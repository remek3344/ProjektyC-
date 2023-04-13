#include <iostream>
using namespace std;
int main()
{
 int wynik=0;
 int a=1;
 int b=1;
 int c=1;
 wynik=++a + b++ + ++c;  
 cout<<wynik<<endl;
 cout<<a;//a==2, wynik==5
// wynik=++a + ++a; takich wyrazen nie dopuszcza specyfikacja C++
}