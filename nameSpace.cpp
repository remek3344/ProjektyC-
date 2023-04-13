#include <iostream>
using namespace std;
namespace p1 {
// Definicja nowego typu danych o nazwie real:
typedef float real;
/* UWAGA
* Identyfikator real stanowi faktycznie alias nazwy float.
*/
// Definicja stałej PI:
const float PI = 3.14159;
}
// Definicja przestrzeni nazw p2:
namespace p2 {
// Definicja stałej PI:
const double PI = 3;
}
int main()
{
    p1::real liczba=5;
    liczba=liczba*p2::PI;
    cout<<liczba<<endl;
return 0;
}