#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2){
  unordered_map<int,int> umii;
  vector<int> ans;

  int len=nums2.size()-1;
  stack<int> sti;
  for(;len>=0;len--){
    while(!sti.empty() && sti.top() <= nums2[len]){
      sti.pop();
    }
    if(sti.empty()) umii[nums2[len]]=-1;
    else umii[nums2[len]]=sti.top();
    sti.push(nums2[len]);
  }

  for(int i:nums1){
    auto it = umii.find(i);
    ans.push_back(it->second);
  }
  return ans;

}

int main(){
  vector<int> nums1 = {4,1,2};
  vector<int> nums2 = {1,3,4,2};
  vector<int> ans=nextGreaterElement(nums1,nums2);
  for(int i:ans) cout << i << " ";
}
