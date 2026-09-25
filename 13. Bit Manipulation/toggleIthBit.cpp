#include <iostream>
using namespace std;

int toggleIthBit(int &a , int i){
  a=((1<<i)^a);
  return a;
}

int main(){
  int a=15;
  int i=2;
  cout << toggleIthBit(a,i) << "\n";
  cout << toggleIthBit(a,i);
}