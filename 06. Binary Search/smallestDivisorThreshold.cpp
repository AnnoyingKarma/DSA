#include <iostream>
#include <vector> 
using namespace std;


int smallestDivisor(vector<int>& nums, int threshold) {
  
  int n=nums.size(),maxValue=nums[0],minValue=1;
  for(int i=1; i<n; ++i){
    maxValue=max(maxValue,nums[i]);
  }      

  int smallestDivider=INT_MAX;
  while(minValue<=maxValue){
    int mid=minValue+((maxValue-minValue)/2);
    long long cnt=0;
    for(int i=0; i<n; ++i){
      cnt+=((1ll*nums[i]+mid-1)/mid);
    }
    if(cnt>threshold){
      minValue=mid+1;
    }
    else{
      smallestDivider=min(smallestDivider,mid);
      maxValue=mid-1;
    }
  }
  return smallestDivider;
}

int main(){
  vector<int> nums={21212,10101,12121};
  cout << smallestDivisor(nums, 1000000);

}