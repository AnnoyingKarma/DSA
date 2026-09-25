#include <iostream>
using namespace std;

char changeAlphanumeric(char c){
  if(c>='A' && c<='Z') return c-'A'+'a';
  else if(c>='a' && c<='z') return c;
  else if(c>='0' && c<='9') return c;
  return '!';
}

bool isPalindrome(string s) {
  int len = s.length();
  int l=0, r=len-1;
  while(l<r){
    while(l<r && changeAlphanumeric(s[l])=='!') ++l;
    while(l<r && changeAlphanumeric(s[r])=='!') --r;
    if(changeAlphanumeric(s[l])!=changeAlphanumeric(s[r])) return false;
    ++l,--r;
  }
  return true;
}

int main(){
  cout << isPalindrome("0P");
}