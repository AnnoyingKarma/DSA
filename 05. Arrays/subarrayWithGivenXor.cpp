#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//BruteForce
/*
int solve(vector<int> &A, int B) {
  int n=A.size(),ans=0;
  for(int i=0; i<n; i++){
    long long sum=0;
    for(int j=i; j<n; j++){
      sum^=A[j];
      if(sum==B) ++ans;
    }
  }
  return ans;
}
*/

//Optimized
int solve(vector<int> &A, int B) {
  unordered_map<int,int> store;
  store[0]=1;
  int n=A.size(),xr=0,ans=0;
  for(int i=0; i<n; ++i){
    xr^=A[i];
    int val=xr^B;
    ans+=store[val];
    store[xr]++;
  }
  return ans;
}

int main(){
  vector<int> A={4, 2, 2, 6, 4};
  int B=6;
  cout << solve(A,B) << "\n";
}