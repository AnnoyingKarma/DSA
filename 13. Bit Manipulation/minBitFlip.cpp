#include <iostream>
using namespace std;

/*
int minBitFlip(int start,int goal){
  int cnt=0;
  for(int i=0; i<32; i++){
    int a = (start>>i)&1;
    int b= (goal>>i)&1;
    if(a^b)cnt++;
  }
  return cnt;
}
*/

int minBitFlip(int start,int goal){
  int cnt=0,a =start^goal;
  for(int i=0; i<=31; i++){ 
    if((a>>i)&1)cnt++;
  }
  return cnt;
}

// can also do (int a=start^goal) then while(a!=0)a=a&(a-1), cnt++ ;


int main(){
  cout << minBitFlip(10,7);
}