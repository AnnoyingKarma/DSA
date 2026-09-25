#include <iostream>
#include <algorithm>
using namespace std;

string decimalToBinary(int decimal){
  string ans;
  int temp=decimal;
  while(temp>0){
    ans+=to_string(temp%2);
    temp/=2;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
  int decimal=32251;
  cout << decimalToBinary(decimal);
}
