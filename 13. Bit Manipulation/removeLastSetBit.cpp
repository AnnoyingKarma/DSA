#include <iostream>

int removeLastBit(int &a){
  a=a&(a-1);
  return a;
}

int main(){
  int a=8;
  std::cout << removeLastBit(a);
}
