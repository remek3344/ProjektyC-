#include <iostream>
using namespace std;
namespace volume {

typedef float real;
const float cola = 0.33;
const float flaszka = 0.5;
const float liter= 1;
}
int main()
{
    int a=13;
    int b=12;
    int c=10;
    cout<<13*volume::flaszka+12*volume::cola+c*volume::liter<<endl;
return 0;
}