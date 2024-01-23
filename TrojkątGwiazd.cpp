#include <iostream>
using namespace std;
int main() {
    int wysokosc = 10;  

   
    for (int i = 1; i <= wysokosc; ++i) {
        
     
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        
        cout << endl;
    }

    return 0;
}