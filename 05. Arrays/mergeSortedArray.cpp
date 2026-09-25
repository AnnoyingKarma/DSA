#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  int i=(nums1.size())-1,j=m-1,k=n-1;
  while(k>=0 && j>=0){
    if(nums1[j]<=nums2[k]){
      swap(nums1[i],nums2[k]);
      k--;
      i--;  
    }
    else if(nums1[j]>nums2[k]){
      swap(nums1[i],nums1[j]);
      j--;
      i--;
    }
  }
  while(k>=0){
    swap(nums2[k],nums1[i]);
    i--;
    k--;
  }
}

int main(){
  vector<int> nums1={-2,-1,0,0,2,7,8,0,0,0},nums2={-9,0,10};
  int m=7,n=nums2.size();
  merge(nums1,m,nums2,n);
  for(auto i:nums1){
    cout << i << " ";
  }
}