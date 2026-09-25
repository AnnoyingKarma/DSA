#include <iostream>
using namespace std;


int maxDepth(string s) {
  int n=s.size();
  int cnt=0,maxValue=0;
  for(int i=0; i<n; ++i){
    if(s[i]=='(') cnt++;
    else if(s[i]==')') cnt--;
    maxValue=max(maxValue,cnt);
  }
  return maxValue;
  
}

int main(){
  string  s = "(1+(2*3)+((8)/4))+1";
  cout << maxDepth (s);
}