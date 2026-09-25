#include <iostream>
using namespace std;

int myAtoi(string s) {

  int n=s.size(),cnt=0;
  bool neg=false;
  string store;
  for(int i=0; i<n; ++i){
    if(s[i]=='-' || s[i]=='+') {
      if(store.empty()!=true) break;
      if(s[i]=='-')neg=true;
      cnt++;
    }
    else if(s[i]>='0' && s[i]<='9'){
      store+=s[i];
    }
    else if(s[i]==' ' && store.empty() && cnt==0){
      continue;
    }
    else{
      break;
    }
    if(cnt>1) return 0;
  }
  
  int m=store.size();
  int z=0;
  for(int i=0; i<m; ++i){
    if(store[i]!='0') {
      z=i;
      break;
    }
    if(store[m-1]=='0' && i==m-1) return 0;
  }
  store=store.substr(z);

  if(store.empty()==true) return 0;
  if(store.length()>10){
    if(neg) return INT_MIN;
    return INT_MAX;
  }
  long long ans=stoll(store);

  if(neg==true) ans= -ans;
  if(ans>INT_MAX) ans=INT_MAX;
  else if(ans<INT_MIN) ans=INT_MIN;

  return ans;
}

int main(){

  cout << myAtoi("   + 123");
}
