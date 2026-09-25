#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  auto point = lower_bound(nums.begin(),nums.end(),target);
  int val = point-nums.begin();
  return val;
}

int main(){
  vector<int> v={1,3,5,6,10,100,200,300};
  cout << searchInsert(v,100);
}