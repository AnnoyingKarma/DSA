#include <iostream>
using namespace std;

/*
int findXOR(int l, int r){
  int xr=0;
  for(int i=l; i<=r; i++){
    xr^=i;
  }
  return xr;
}
*/

//to solve in o(1)
// to find from 1 to n -> IT FOLLOWS A PATTERN
int find(int n){
  if(n%4==1) return 1;
  else if(n%4==2) return n+1;
  else if(n%4==3) return 0; 
  //else if(n%4==4) return n;
  return n;
}

int findXOR(int l,int r){
  return find(l-1)^find(r);
}

int main(){
  cout << findXOR(2,3);
}