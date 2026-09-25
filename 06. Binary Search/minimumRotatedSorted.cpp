#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
  int s=0,e=nums.size()-1,mn=INT_MAX;
  while(s<=e){
    int m=s+((e-s)/2);
    if(nums[s]<=nums[m]){
      mn=min(mn,nums[s]);
      s=m+1;
    }
    else {
      mn=min(mn,nums[m]);
      e=m-1;
    }
  }
  return mn;
}

int main(){
  vector<int> nums={};

  cout << findMin(nums);
}