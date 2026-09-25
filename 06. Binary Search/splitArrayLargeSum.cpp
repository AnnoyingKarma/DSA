#include <iostream>
#include <vector>

using namespace std;


int splitArray(vector<int>& nums, int k) {

  int n=nums.size();
  if(n<k) return -1;

  long long minValue=nums[0],maxValue=0;
  for(int i=0; i<n; ++i){
    maxValue+=nums[i];
    minValue=max(minValue,nums[i]*1ll);
  }

  int ans=-1;

  while(minValue<=maxValue){
    
    int cnt=1;
    long long sum=0;
    long long mid=minValue+(maxValue-minValue)/2;

    for(int i=0; i<n; ++i){
      sum+=nums[i];
      if(sum>mid){
        ++cnt;
        sum=nums[i];
      }
    }

    if(cnt>k){
      minValue=mid+1;
    }
    else{
      ans=mid;
      maxValue=mid-1;
    }

  }
  return ans;
}

int main(){
  vector<int> nums={7,2,5,10,8};
  cout << splitArray(nums,2);
}