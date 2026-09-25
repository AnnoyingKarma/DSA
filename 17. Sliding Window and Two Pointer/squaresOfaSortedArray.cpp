#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// easy way tc o(n * logn) sc o(1)
// vector<int> sortedSquares(vector<int>& nums){
//   int len = nums.size();
//   for(int i=0; i<len; ++i){
//     nums[i]=nums[i]*nums[i]*1ll;
//   }
//   sort(nums.begin(), nums.end());
//   return nums;
// }

// two pointer way tc o(n) and sc o(n) 
vector<int> sortedSquares(vector<int>& nums){
  int len = nums.size();
  vector<int>  ans(len);
  int l=0,r=len-1,it=len-1;
  while(l<=r){
    int valOne=nums[l]*nums[l];
    int valTwo=nums[r]*nums[r];
    if(valOne>=valTwo) {
      ans[it]=valOne;
      ++l;
    }
    else{
      ans[it]=valTwo;
      --r;
    }
    --it;
  }
  return ans;
}

int main(){
  vector<int> nums={-4,-1,0,3,10};
  vector<int> ans=sortedSquares(nums);
  for(int it:ans){
    cout << it << " ";
  }
}