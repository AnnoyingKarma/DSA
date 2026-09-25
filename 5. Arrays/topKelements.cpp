#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
  vector<int> ans;
  unordered_map<int,int> um;
  multiset<pair<int,int>> order;
  int n=nums.size();

  for(int i=0; i<n; i++){
    um[nums[i]]++;
  }

  for(auto it:um){
    int x=it.first;
    int y=it.second;
    order.insert({y,x});
    if(order.size() > k) order.erase(order.begin());
  }

  for(auto it:order){
    int x=it.second;
    ans.push_back(x);
  }

  return ans;
}

int main(){
  vector<int> nums ={1};
  int k=1;
  vector<int> ans=topKFrequent(nums,k);
  for(auto i:ans){
    cout << i << " ";
  }
}