#include <iostream>
#include <vector> 
using namespace std;

long long merge(long long arr[], int start,int mid,int end,long long &cnt){
  int left=start,right=mid+1; 
  vector<int> temp;

  while(left<=mid && right<=end){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
      cnt+=mid-left+1;
    }
  }

  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=end){
    temp.push_back(arr[right]);
    right++;
  }

  for(int i=start; i<=end; i++){
    arr[i]=temp[i-start];
  }
  return cnt;
}

long long divide(long long arr[], int start, int end,long long &cnt){
  if(start<end){
    int mid=(start+end)/2;
    divide(arr,start,mid,cnt);
    divide(arr,mid+1,end,cnt);
    merge(arr,start,mid,end,cnt);
  }
  return cnt;
}

long long int inversionCount(long long arr[], int n) {
  // Your Code Here
  long long cnt=0;
  divide(arr,0,n-1,cnt);
  return cnt;
}

int main(){
  long long arr[] = {5,3,2,4,1};
  int n = sizeof(arr)/sizeof(long long);
  cout << inversionCount(arr,n) <<  " ";
}