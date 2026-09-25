#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums,int start,int mid,int end){

  int left=start;
  int right = mid+1;
  vector<int> temp;

  while(left<=mid && right<=end){
    if(nums[left]<=nums[right]){
      temp.push_back(nums[left]);
      left++;
    }
    else{
      temp.push_back(nums[right]);
      right++;
    }
  }

  while(left<=mid){
    temp.push_back(nums[left]);
    left++;
  }
  while(right<=end){
    temp.push_back(nums[right]);
    right++;
  }

  for(int i=start; i<=end; ++i){
    nums[i]=temp[i-start];
  }
}

void reverseCounting(vector<int> &nums,int start,int mid, int end, int &inversions){

  int leftPtr = start;
  int rightPtr = mid+1;

  while(leftPtr<=mid && rightPtr<=end){
    if(nums[leftPtr]>2ll*nums[rightPtr]){
      inversions+=mid-leftPtr+1;
      rightPtr++;
    }
    else{
      leftPtr++;
    }
  }

}

void divide(vector<int> &nums,int start,int end,int &inversions){  
  if(start>=end){
    return;
  }
  int mid=(start+end)/2;
  divide(nums,start,mid,inversions);
  divide(nums,mid+1,end,inversions);
  reverseCounting(nums,start,mid,end,inversions);
  merge(nums,start,mid,end);
  return;
}

int reversePairs(vector<int>& nums) {
  int n=nums.size()-1;
  int inversions=0;
  divide(nums,0,n,inversions);
  return inversions;
}  

int main(){ 
  vector<int> nums = {3,3,3,3,1};
  cout << reversePairs(nums) << "\n";
  for(auto it:nums) cout << it << " ";
}



/*
multiset<long long> storage;
int cnt=0;
int i=nums.size()-1;
for(; i>=0; --i){
  long long val = nums[i];
  long long storingValue = 1ll*val*2;
  auto point = storage.upper_bound(val-1);
  cnt+=std::distance(storage.begin(),point);
  storage.insert(storingValue);
}
return cnt;
*/