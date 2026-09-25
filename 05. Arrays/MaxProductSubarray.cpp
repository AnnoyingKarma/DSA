#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
  int n=nums.size();
  long long maxSum=INT_MIN,temp=1,tempp=1;
  
  for(int i=0,j=n-1; i<n; ++i,--j){
    temp*=nums[i];
    tempp*=nums[j];
    maxSum=max(maxSum,max(temp,tempp));
    if(nums[i]==0) temp=1;
    if(nums[j]==0) tempp=1;
  }

  return maxSum;
}

int main(){
  vector<int> nums={-1,-2,0,2,-4,0,7,-1,0,5,-5,-1};
  cout << maxProduct(nums);
}