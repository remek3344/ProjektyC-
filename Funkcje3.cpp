#include<iostream>
using namespace std;

void zamienWartosci(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 5;
    int b = 10;

    cout << "Przed zamianą miejscami:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

   
    zamienWartosci(a, b);

    cout << "Po zamianie miejscami:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}