#include <iostream>
#include <vector>

using namespace std;

void sieve(const int n,vector<bool> &v) {
  for(int i=2; i*i<=n; i++){
    if(v[i]){
      for(int j=i*i; j<=n; j+=i){
        v[j]=false;
      }
    }
  }
}

vector<int> findPrimeFactors(int n) {
  vector<bool> v(n+1,true); 
  sieve(n,v);

  vector<int> ans;
  for(int i=2; i*i<=n; i++){
    if(v[i] && n%i==0){
      while(n%i==0){
        ans.push_back(i);
        n/=i;
      }
    }
  }
  if(n>1) ans.push_back(n);
  return ans;
}

int main(){
  vector<int> ans=findPrimeFactors(2123498);
  for(auto it:ans) cout << it << " ";
}