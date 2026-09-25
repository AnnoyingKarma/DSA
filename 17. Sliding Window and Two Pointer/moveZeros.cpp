#include <iostream>
#include <vector>

using namespace std;

void moveZeros(vector<int> &nums){
  int len = nums.size();
  int zeroIndex=-1;
  for(int i=0; i<len; ++i){
    if(nums[i]==0) {
      zeroIndex=i;
      break;
    }
  }
  if(zeroIndex==-1) return; 
  for(int i=zeroIndex+1; i<len; ++i){
    if(nums[i]!=0){
      swap(nums[zeroIndex],nums[i]);
      ++zeroIndex;
    }
  }

}

int main(){
  vector<int> nums={0,1,0,3,12};
  moveZeros(nums);
  for(int it:nums) cout << it << " ";
}