#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
  int n=nums.size(),s=0,e=nums.size()-1;       
  while(s<=e){
    int mid=s+((e-s)/2);

    if(s==e) return nums[s];
    else if(nums[mid]==nums[mid+1]) {
      if((n-mid)%2==0) e=mid-1;
      else s=mid+2; 
    }
    else if(nums[mid]==nums[mid-1]){
        if((n-(mid-1))%2==0) e=mid-2;
        else s=mid+1;
    }
    else return nums[mid];
  }
  return -1;
}

int main(){

vector <int> nums={2,2,3};
cout << singleNonDuplicate(nums);
}