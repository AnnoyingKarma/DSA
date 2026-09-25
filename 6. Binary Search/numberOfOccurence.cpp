#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x, bool inLeft){
  int s=0,e=n-1,val=-1;
  while(s<=e){
    int mid=s+((e-s)/2);
    if(arr[mid]<x){
      s=mid+1;
    } 
    else if(arr[mid]>x){
      e=mid-1;
    }
    else{
      val=mid;
      if (inLeft) e=mid-1;
      else s=mid+1;
    }
  } 
  return val;
}

int main(){
  int arr[]={1, 1, 2, 2, 2, 2, 3};
  int n=sizeof(arr)/sizeof(int);
  int x=0,ans=0;
  if(binarySearch(arr,n,x,true)==-1) ans = 0;
  else ans=(binarySearch(arr,n,x,false)-binarySearch(arr,n,x,true)+1);
  cout << ans;
}