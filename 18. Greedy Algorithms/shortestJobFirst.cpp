#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int> &bt){
  sort(bt.begin(),bt.end(),less<int>());
  int len=bt.size();
  long long sum=0,ans=0;
  for(int i=1; i<len; ++i){
    sum+=bt[i-1];
    ans+=sum;
  }
  return ans/len;
  
}

int main(){
  vector<int> bt={4,3,7,1,2};
  cout << solve(bt);
}