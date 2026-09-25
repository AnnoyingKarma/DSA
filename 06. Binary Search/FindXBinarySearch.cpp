#include <iostream>
#include <vector> 
using namespace std;

int binarySearch(vector<int> &nums, int target){
  int end=nums.size()-1,start=0,mid=start+((end-start)/2);

  while(start<=end){
    if(nums[mid]==target){
      return mid;
    }
    else if(nums[mid]<target){
      start=mid+1;
    }
    else if(nums[mid]>target){
      end=mid-1;
    }
    mid=start+((end-start)/2);
  }
  return -1;
}

int search(vector<int>& nums, int target) {
  return binarySearch(nums, target);
}

int main(){

  vector<int> nums ={-1,0,3,5,9,12};
  int target = 9;
  cout << search(nums,target);

}