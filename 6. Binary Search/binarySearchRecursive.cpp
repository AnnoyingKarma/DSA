#include <iostream>
#include <vector> 
using namespace std;

int binarySearch(vector<int> &nums, int target,int start, int mid, int end){
  mid=start+((end-start)/2);
  if(nums[mid]==target){
    return mid;
  }
  else if(nums[mid]<target){
    return binarySearch(nums, target, mid+1, mid, end);
  }
  else if(nums[mid]>target){
    return binarySearch(nums, target, start, mid, mid-1);
  }
  if(start>end){
    return -1;
  }
  return -1;
}

int search(vector<int>& nums, int target) {
  int end=nums.size()-1,start=0,mid=start+((end-start)/2);
  return binarySearch(nums, target, start, mid, end);
}

int main(){

  vector<int> nums ={5};
  int target = 5;
  cout << search(nums,target);

}