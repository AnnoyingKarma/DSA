#include <iostream>
using namespace std;

int main(){
  int a = 100;
  int b = 500;
  cout << a << " " << b << "\n";
  a=a^b;
  b=a^b; // b is (a^b)^b
  a=a^b; // a is (a^b)^a  
  cout << a << " " << b ;
}