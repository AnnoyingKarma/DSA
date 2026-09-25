#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> arr,const int target,int start,int end){
  int mid=start+(end-start)/2;
  if(arr[mid]==target){
    return mid;
  }
  if(target<arr[mid]) return binarySearch(arr,target,start,mid-1);
  return binarySearch(arr,target,mid+1,end);
}

int rotatedArray(const vector<int> arr,const int target,int start,int end){
  if(start>end) return -1;
  int mid=start+(end-start)/2;
  if(arr[mid]==target) return mid;
  if(arr[start]<=arr[mid]){
    if(target>=arr[start]&&target<=arr[mid]){
      return binarySearch(arr,target,start,mid);
    }
    else{
      return rotatedArray(arr,target,mid+1,end);
    }
  }
  else{
    if(target>=arr[mid]&&target<=arr[end]){
      return binarySearch(arr,target,mid,end);
    }
    else{
      return rotatedArray(arr,target,start,mid-1);
    }
  }
}

int main(){
  vector<int> arr={5,6,7,8,9,10,2,3};
  cout << rotatedArray(arr,100,0,arr.size()-1);
}