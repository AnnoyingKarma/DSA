#include <iostream>
#include <vector>

using namespace std;

int minSubArrayLen(int target,const vector<int>& nums){

  int l=0,len=nums.size();
  int ans=len+1;
  long long sum=0;
  for(int r=0; r<len; ++r){
    sum+=nums[r];
    while(l<=r && sum>=target){
      ans=min(ans,r-l+1);
      sum-=nums[l];
      ++l;
    }
  }
  if(ans==len+1) return 0;
  return ans;
}

int main(){
  cout << minSubArrayLen(7,{2,3,1,2,4,3});
}