#include <iostream>
#include <vector>
#include <set>
using namespace std;

// simple solution
/*
bool checkPrime(int n){
  if(n==1) return false;
  for(int i=2; i*i<=n; i++){
    if(n%i==0) return false;
  }
  return true;
}

vector<int> AllPrimeFactors(int n){
  set<int> st;

  for(int i=1; i*i<=n; i++){
    if(n%i==0){
      if(checkPrime(i))st.insert(i);
      if(checkPrime(n/i))st.insert(n/i);
    }
  }
  vector<int> ans(st.begin(),st.end());
  return ans;
}
*/

// pretty optimized
vector<int> AllPrimeFactors(int n){
  vector<int> ans;
  
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      ans.push_back(i);
      while(n%i==0) n/=i;
    }
  }
  if(n>1)ans.push_back(n);
  return ans; 
}

int main(){
  vector<int> ans=AllPrimeFactors(100);
  for(auto it: ans) cout << it << " ";
}
