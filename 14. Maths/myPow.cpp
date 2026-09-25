#include <iostream>
using namespace std;


//brute 
/*
double myPow(double x, int n){
  if(n==0 && x!=0) return 1.0;
  else if(n==0 && x==0) return 0; 
  double a=x;

  bool sign = (n<0) ? 1:0;
  n=abs(n);
  for(int i=1; i<n; i++){
    a*=x;
  }

  if(sign) return 1.0/a;
  return a;
}
*/

double myPow(double x, int n){
  if(n==0 && x==0) return 0.0;
  if(n==1) return 1.0;

  bool sign=(n<0)?1:0;
  n=abs(n);
  double ans=1;

  while(n>0){
    if(n&1){
      ans*=x;
      n-=1;
    }
    else{
      x*=x;
      n/=2;
    }
  }

  if(sign) return 1.0/ans;
  return ans;

}

int main(){
  cout << myPow(210,-100);
}