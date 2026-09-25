#include <iostream>
using namespace std;


void bubbleSort(int arr[],int n,int i=0){
  if(n<=1)return;
  if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
  if(i<n-1) bubbleSort(arr,n,i+1);
  return bubbleSort(arr,n-1);
}

int main(){
  int arr[]={1,3,100,1,4,500,4,2};
  bubbleSort(arr,(sizeof(arr)/sizeof(arr[0])));
  for(auto it:arr) cout << it << " ";
}
