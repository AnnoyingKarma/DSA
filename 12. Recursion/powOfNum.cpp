#include <iostream>
using namespace std;

double myPow(double x, int n){
  if(n==0) return 1.0000;
  else if(x==0) return 0.0000;
  else if(x>0){
    if(n==1) return x;
    return double(x)*myPow(x,n-1);
  }
  else{
    if(n==-1) return x;
    return double(1.0000)/myPow(x,n+1);
  }
}

int main(){
  cout << myPow(2.0000,-2);
}
