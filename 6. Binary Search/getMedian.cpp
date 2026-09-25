#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


/* brute
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
  double ans;
  int n=nums1.size(),m=nums2.size();
  int i=0,j=0;
  int value1=-1,value2=-1;
  int index1=(n+m-1)/2;
  int index2=(n+m)/2;
  int temp=0;

  while(i<n && j<m){
    if(nums1[i]<=nums2[j]){
      if(temp==index1){
        value1=nums1[i];
      }
      if(temp==index2){
       value2=nums1[i]; 
      }
      i++;
      temp++;
    }
    else{
      if(temp==index1){
        value1=nums2[j];
      }
      if(temp==index2){
       value2=nums2[j]; 
      }
      j++;
      temp++;
    }
  }
  while(i<n){
    if(temp==index1){
      value1=nums1[i];
    }
    if(temp==index2){
      value2=nums1[i]; 
    }
    i++;
    temp++;
  }
  while(j<m){
    if(temp==index1){
      value1=nums2[j];
    }
    if(temp==index2){
      value2=nums2[j]; 
    }
    j++;
    temp++;
  }

  if((n+m)%2==0){
    ans=(double)(value1+value2)/(double)2;
  }
  else{
    ans=(double)value1;
  }
  return (double)ans;
}
*/

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

  int n=nums1.size(),m=nums2.size();
  if(n>m)return findMedianSortedArrays(nums2,nums1);
  int leftPart=(n+m+1)/2;

  int low=0,high=n;

  while(low<=high){

    int mid1=low+(high-low)/2;
    int mid2=leftPart-mid1;
    int l1=(mid1==0) ? INT_MIN : nums1[mid1-1];
    int l2=(mid2==0) ? INT_MIN : nums2[mid2-1];
    int r1=(mid1==n) ? INT_MAX : nums1[mid1];
    int r2=(mid2==m) ? INT_MAX : nums2[mid2];

    if(l1>r2){
      high=mid1-1;
    }
    else if(l2>r1){
      low=mid1+1;
    }
    else{
      if((n+m)%2==0){
        return (double)(max(l1,l2)+min(r1,r2))/2.0;
      }
      else{
        return (double)max(l1,l2);
      }
    }
  }
  return 0.0;

}

int main(){
  vector<int> nums1={1},nums2={2};
  cout << fixed << setprecision(5) <<  findMedianSortedArrays(nums1,nums2);

}