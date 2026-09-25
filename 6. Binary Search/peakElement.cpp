#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
  int s=0,e=nums.size()-1;
  if(nums.size()==1) return 0;
  else if(nums[s]>nums[s+1]) return 0;
  else if(nums[e]>nums[e-1]) return e;

  while(s<=e){
    int mid=s+((e-s)/2);
    if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
      return mid;
    }
    else if(nums[mid]>=nums[mid-1]) {
      s=mid+1;
    }
    else{
      e=mid;
    }
  }
  return -1;
}

int main(){
  vector<int> nums={3,4,3,2,1};
  cout << findPeakElement(nums);
}