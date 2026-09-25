#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr, int target,int s, int e){
  int m=s+((e-s)/2);
  if(s>e) return -1;
  if(target<arr[m])return bs(arr,target,s,m-1);
  else if(target>arr[m])return bs(arr,target,m+1,e);
  return m;
}

int main(){

  vector<int> arr={1,5,7,9,10,11,12,19,20,40,150,1501};
  int target=1501;
  cout << bs(arr,target,0,arr.size()) << "\n";
}