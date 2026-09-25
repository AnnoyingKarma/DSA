// check if i'th bit is set or (unset / clear), go from right to left
#include <iostream>
using namespace std;

bool usingLeftBit(int n,int i){
  if((n & (1<<i)) !=0){
    return true;
  }
  return false;
}

bool usingRightBit(int n, int i){
  if(((n>>i)&1)!=0){
    return true;
  }
  return false;
}

int main(){
  int n=7;
  int i=2;
  cout << usingLeftBit(n,i) << "\n";
  cout << usingRightBit(n,i);
}