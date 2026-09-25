#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
//sc=o(1) and tc=Nlog(N)+N
vector<int> singleNumber(vector<int> &nums){
  sort(nums.begin(),nums.end());
  int n=nums.size();
  vector<int> ans;
  for(int i=1; i<n; i+=2){
    if(nums[i]!=nums[i-1]){
      ans.push_back(nums[i-1]);
      i--;
    }
    if(ans.size()==2) return ans;
  }
  ans.push_back(nums[n-1]);
  return ans;
}
*/

vector<int> singleNumber(vector<int> &nums){
  
  int n=nums.size();
  int xr=0;
  for(int i=0; i<n; i++){
    xr^=nums[i];
  }
  int rightBit=((xr&xr-1)^xr);
  int a=0,b=0;
  for(int i=0; i<n; i++){
    if(nums[i]&rightBit) a^=nums[i];
    else b^=nums[i];
  }
  return{a,b};
}

int main(){
  vector<int> nums={1,1,2,3,4,4,5,5};
  vector<int> ans= singleNumber(nums);
  for(auto it:ans) cout << it << " <-> ";
}
