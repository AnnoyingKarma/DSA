#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int>& nums){
  int len =nums.size();
  long long jump=nums[0];
  for(int i=1; i<len; ++i){
    --jump;
    if(jump==0) return false;
    if(jump>nums[i]) --jump;
    else jump=nums[i];
  }
  return true;
}

int main(){
  vector<int> nums={3,2,1,0,4};
  cout << canJump(nums);
}