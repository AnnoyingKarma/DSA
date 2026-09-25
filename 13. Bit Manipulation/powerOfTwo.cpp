#include <iostream>
using namespace std;
//brute is o(1) solution
bool isPowerOfTwo(int n){
  if(n<1) return false;
  int cnt=0;
  for(int i=0; i<31; i++){
    if(n&(1U<<i))cnt++;
    if(cnt>1) return false;
  }
  return true;
}

// optimized
bool isPowerOfTwo(int n){
  return n>0 && (n&(n-1))==0;
}

int main(){

  cout << isPowerOfTwo(2147483646);

}