#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
vector<int> searchRange(vector<int>& nums, int target) {

  vector<int> ans(2,-1);

  // ans[0]=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
  // ans[1]=(upper_bound(nums.begin(),nums.end(),target)-nums.begin())-1;
  // if(nums[ans[0]]!=target) ans[0]=-1,ans[1]=-1;
  // return ans;

  int n=nums.size();
  int e=n-1,s=0;
  int mid=s+((e-s)/2);

  while(s<=e){
  if(nums[mid]==target){
    int f=mid,l=mid;
    for(; f>=0; --f){
      if(nums[f]!=target){
        ++f;
        break;
      }
      if(f==0 )break;
    }
    for(; l<n; ++l){
      if(nums[l]!=target){
        --l;
        break;
      }
      if(l==n-1) break;
    }
    ans[0]=f,ans[1]=l;
    break;
  }
  else if(nums[mid]>target){
    e=mid-1;
  }
  else if(nums[mid]<target){
    s=mid+1;
  }
  mid=s+((e-s)/2);
  }  
  return ans;
}
*/



int binarySearch(vector<int>& nums, int target,bool inLeft){
  int s=0,e=nums.size()-1;
  int mid=s+((e-s)/2);
  int i=-1;

  while(s<=e){
    if(nums[mid]>target){
      e=mid-1;
    }
    else if(nums[mid]<target){
      s=mid+1;
    }
    else{
      i=mid;
      if(inLeft==true) e=mid-1;
      else s=mid+1;
    }
    mid=s+((e-s)/2);
  }
  return i;
}



int main(){
  vector<int> nums= {10,10};
  int target = 10;
  // vector <int> ans = searchRange(nums,target);

  int a = binarySearch(nums,target,true);
  int b = binarySearch(nums,target,false);
  cout << a << " " << b;
}