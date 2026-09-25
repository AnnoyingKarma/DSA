#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k){
  int n=nums.size();
  deque<int> dq;
  vector<int> ans;
  
  for(int i=0; i<k; i++){
    while(!dq.empty() && nums[i]>nums[dq.back()]) dq.pop_back();
    dq.push_back(i);
  }
  
  ans.push_back(nums[dq.front()]);

  for(int i=k; i<n; i++){
    if(dq.front()<(i+1)-k) dq.pop_front();
    while(!dq.empty() && nums[i]>nums[dq.back()]) dq.pop_back();
    dq.push_back(i);
    ans.push_back(nums[dq.front()]);
  }

  return ans;

}

int main(){
  vector<int> nums={1,3,-1,-3,5,3,6,7};
  vector<int> ans=maxSlidingWindow(nums,3);

  for(int i:ans) cout << i << " ";
  
}
