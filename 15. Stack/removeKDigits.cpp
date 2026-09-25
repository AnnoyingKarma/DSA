#include <iostream>
#include <vector>
using namespace std;

string removeKdigits(string num, int k){
  if(k==num.size()) return "0";
  string ans;
  vector<char> vc;
  for(auto c:num){
    while(!vc.empty() && vc.back()>c && k>0){
      vc.pop_back();
      k--;
    }
    vc.push_back(c);
  }
  
  while(k>0){
    vc.pop_back();
    --k;
  }

  int temp=0;
  int n=vc.size();
  while(temp<n && vc[temp]=='0') temp++;

  for(int i=temp; i<n; i++){
    ans.push_back(vc[i]);
  }
  if(ans=="") ans.push_back('0'); 
  return ans;
}

int main(){
  string num="10";
  cout << "--" << removeKdigits(num,2) << "--";
}
