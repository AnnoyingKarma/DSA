#include <iostream>
using namespace std;


bool palindrome(string s,int l, int r){
  if(s[l]!=s[r]) return false;
  if(l>=r) return true;
  return palindrome(s,l+1,r-1);
}

int main(){
  string s="";
  cout << palindrome(s,0,s.size()-1);
}
