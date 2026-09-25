#include <iostream>
#include <vector>
using namespace std;

void selSort(vector<int> &arr,int n,int mx=0,int i=0){
  if(n==0) return;
  if(arr[mx]<arr[i]) mx=i;
  if(i<n-1) return selSort(arr,n,mx,i+1);
  swap(arr[n-1],arr[mx]);
  return selSort(arr,n-1,0);
}

int main(){
  vector<int> arr={4, 2, 5, 1, 3};
  selSort(arr,arr.size());
  for(auto x:arr){
    cout << x << " ";
  }
}