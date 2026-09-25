#include <iostream>
#include <vector>

using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k){

  int len = nums.size();
  int l=0,subArrayCount=0;
  long long pro=1;
  for(int r=0; r<len; ++r){
    pro*=nums[r];
    while(pro>=k){
      pro/=nums[l];
      ++l;
    }
    subArrayCount+=r-l+1;
  }
  return subArrayCount;
}

int main(){
  vector<int> nums={10,5,2,6};
  int k=100;
  cout << numSubarrayProductLessThanK(nums,k);
}