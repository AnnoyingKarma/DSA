#include <iostream>

bool isPowerOf2(int a){
  if((a&(a-1))==0) return true;
  return false;
}

int main(){
  int a=63;
  int b=128;
  std::cout << isPowerOf2(a) << "\n";
  std::cout << isPowerOf2(b);
}
