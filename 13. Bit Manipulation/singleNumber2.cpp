#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
int singleNumber(vector<int> & nums){
  unordered_map<int,int>um;
  int n=nums.size();
  for(int i=0; i<n; i++){
    um[nums[i]]++;
  }
  for(auto it:um){
    if(it.second==1) return it.first;
  }
  return 0;
}

//sc=o(1) , tc=o(32)*o(n)
int singleNumber(vector<int> & nums){
  int n=nums.size();
  int ans=0;
  for(int i=0; i<=31; i++){
    int cnt=0;
    for(int j=0; j<n; j++){
      if(nums[j]&(1<<i)) cnt++;
    }
    if(cnt%3) ans=(ans|(1<<i));
  }
  return ans;
}

// using sorting
int singleNumber(vector<int> &nums){
  int n=nums.size();
  sort(nums.begin(),nums.end());
  for(int i=1; i<n; i+=3){
    if(nums[i]!=nums[i-1]) return nums[i-1];
  }
  return nums[n-1];
}
*/

int singleNumber(vector<int> &nums){
  int ones=0,twos=0,n=nums.size();
  for(int i=0; i<n; i++){
    ones=(ones^nums[i])&~twos;
    twos=(twos^nums[i])&~ones;
  }
  return ones;
}


int main(){
  vector<int> nums={1,0,1,0,1,0,99};
  cout << singleNumber(nums);
}