#include <iostream>
using namespace std;

int setIthBit(int &a,int i){
  a=((1<<i)|a);
  return a;
}

int main(){
  int a=11;
  int i=2;
  cout << setIthBit(a,i);
}