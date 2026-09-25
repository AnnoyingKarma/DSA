#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val){
  int len = nums.size();
  int l=0,r=len-1,cnt=0;
  while(l<=r){
    if(nums[r]==val) {
      --r,++cnt;
      continue;
    }
    if(nums[l]==val){
      swap(nums[l],nums[r]);
      ++cnt,--r;
    }
    ++l;
  }
  return len-cnt;
}

int main(){
  vector<int> nums={0,1,2,2,3,0,4,2};
  int val=2;
  cout << removeElement(nums,val);
}