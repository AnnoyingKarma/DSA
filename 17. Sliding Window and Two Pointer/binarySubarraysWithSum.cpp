#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
int numSubarraysWithSum(vector<int> &nums, int goal){
  int len = nums.size();
  int sum=0,cnt=0;
  unordered_map <int,int> um;
  um[0]++;
  for(int i=0; i<len; i++){
    sum+=nums[i];
    int temp=sum-goal;
    if(um.count(temp)) cnt+=um[temp];
    um[sum]++;

  }

  return cnt;
}
*/

int numSubarraysWithSum(vector<int> &nums, int goal){
  if(goal<0) return 0;
  int len= nums.size();
  int sum=0, cnt=0, lp=0;
  for(int rp=0; rp<len; rp++){
    sum+=nums[rp];
    while(sum>goal){
      sum-=nums[lp];
      lp++;
    }
    cnt=cnt+(rp-lp+1);
  }
  return cnt;
}

int main(){
  vector<int> nums = {1,0,1,0,1};
  int goal = 2;
  int ansOne = numSubarraysWithSum(nums,goal);
  int  ansTwo = numSubarraysWithSum(nums,goal-1);
  cout << ansOne-ansTwo;
}