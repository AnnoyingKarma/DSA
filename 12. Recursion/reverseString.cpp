#include <iostream>
using namespace std;

string reversal(string s,int i){

  if(i>=s.size())return "";
  return reversal(s,i+1)+s[i];
}



int main(){
  string s= "abcde";
  string ans="";
  ans=reversal(s,0); 
  cout << ans;
}