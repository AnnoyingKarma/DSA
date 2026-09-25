#include <iostream>
using namespace std;

//brute just add divisor until it doesn't reach dividend
/*
int divide(int dividend, int divisor){
  int cnt=1 , total=divisor;
  while(total+divisor<=dividend){
    total+=divisor;
    cnt++;
    }
  return cnt;
}
*/

int divide(int dividend, int divisor){
  
  if(dividend==INT_MIN && divisor==-1) return INT_MAX;
  if(dividend==0) return 0;

  bool sign=0;
  if(dividend<0 && divisor>=0) sign=1;
  if(dividend>=0 && divisor<0) sign=1;

  int dvd=dividend==INT_MIN ? INT_MAX : abs(dividend),dvi=abs(divisor);

  if(divisor==1) {
    if(sign) return -dividend;
    return dividend;
  }

  int ans=0;
  
  while(dvd>=dvi){
    int temp=dvi,mul=0;
    while(dvd>=(temp<<1)){
      temp<<=1;
      mul++;
    }
    ans+=1<<mul;
    dvd-=temp;
  }
  if(sign) return -ans;
  return ans;
}

int main(){
  cout << divide(20,4);
}