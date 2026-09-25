#include <iostream>
using namespace std;

bool isPalindrome(string s,int lp, int rp){
  
  if(lp>=rp){
    return true;
  }
  if(s[lp]!=s[rp]) return false;
  return isPalindrome(s,lp+1,rp-1);
}

bool isPalindrome(string s,int ip){
  if(ip>=s.length()/2)return true;
  if(s[ip]!=s[s.size()-ip-1]) return false;
  return isPalindrome(s,ip+1);
}

int main(){
  string s="abba";
  int lp=0;
  int rp=s.length()-1;
  cout << isPalindrome(s,lp,rp) << " ";
  cout << "\n";
  cout << isPalindrome(s,lp) << " ";
}