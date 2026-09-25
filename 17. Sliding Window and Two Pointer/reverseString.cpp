#include <iostream>
#include <vector>

using namespace std;

vector<char> reverseString(vector<char>& s){
  int len = s.size();
  int l=0,r=len-1;
  while(l<r){
    swap(s[l++],s[r--]);
  }
  return s;
}

int main(){
  vector<char> s={'h','e','l','l','o'};
  vector<char> ans = reverseString(s);
  for(char it:ans) cout << it << " ";
}