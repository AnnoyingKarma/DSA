#include <iostream>
using namespace std;

int unsetBit(int &a, int i){
  a=(a&~(1<<i));
  return a;
}

int main(){
  int a=15;
  int i=2;
  cout << unsetBit(a,i);
}
