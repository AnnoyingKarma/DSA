#include <iostream>

int countSetBits(int &a){
  int cnt=0;
  // while(a!=0){
  //   cnt+=a&1;
  //   a=a>>1;
  // }
  while(a!=0){
    a=(a&(a-1));
    cnt++;
  }
  return cnt;
}

int main(){
  int a =11;
  std::cout << countSetBits(a);
}