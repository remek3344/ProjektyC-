#include <iostream>
using namespace std;
int main() {
    int wysokosc = 10;  

    
    for (int i = wysokosc; i >= 1; --i) {
        
      
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        
      
        cout << endl;
    }

    return 0;
}