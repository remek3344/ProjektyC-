#include <iostream>
using namespace std; 

int main() { 
  int a{1};
  int b{1};
  int c{1};
  int w1{++a * --b + c++};
  cout<<w1;
return 0;
}