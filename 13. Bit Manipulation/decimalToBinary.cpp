#include <iostream>
#include <math.h>
using namespace std;


int binary2Decimal(string binary){
  int s= binary.length()-1;
  int sum=0;
  for(int i=s; i>=0; --i){
    sum+=(binary[i]-'0')*(pow(2,s-i));
  }
  return sum;
}

int main(){
  string binary="101010011011";
  cout << binary2Decimal(binary);
}
