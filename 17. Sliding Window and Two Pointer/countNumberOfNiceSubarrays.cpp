#include <iostream>
#include <vector>
using namespace std;

int numberOfSubarrays(vector<int> &nums, int k){
  int len = nums.size();
  int lp =0,cnt=0,sum=0;
  for(int rp=0; rp<len; ++rp){
    int temp= nums[rp]%2;
    sum+=temp;
    while(sum>k){
      int lim = nums[lp]%2;
      sum-=lim;
      ++lp;
    }
    if(sum<=k)cnt++;
  }
  return cnt;
}

int main(){
  vector<int> nums={1,1,2,1,1};
  int k=3;
  int ansOne = numberOfSubarrays(nums,k);
  int ansTwo = numberOfSubarrays(nums,k-1);

  cout << ansOne-ansTwo;
}