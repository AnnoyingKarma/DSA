#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums){
  stack<int> sti;
  vector<int> ans(nums.size());
  for(int i=nums.size()-1; i>=0; i--){
    sti.push(nums[i]);
  }

  for(int i=nums.size()-1; i>=0; i--){
    while(!sti.empty() && sti.top()<=nums[i]){
      sti.pop();
    }
    if(sti.empty()) ans[i]=-1;
    else ans[i]=sti.top();
    sti.push(nums[i]);
  }
  return ans;
}

int main(){
  vector<int> nums={1,2,3,4,3};
  vector<int> ans = nextGreaterElements(nums);
  for(int i:ans) cout << i << " ";
}
