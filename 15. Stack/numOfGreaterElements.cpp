#include <iostream>
#include <vector>

using namespace std;

vector<int> countNGE(int n,vector<int>&arr, int queries, vector<int> &indices){
  vector<int> vei;
  for(int j=0; j<queries; j++){
    int cnt=0;
    int temp=indices[j];
    for(int i=temp; i<n; i++){
      if(arr[temp]<arr[i]) cnt++;
    }
    vei.push_back(cnt);
  }
  return vei;
}

int main(){ 
  vector<int> arr={3,4,2,7,5,8,10,6},indices={0,5};
  vector<int> ans=countNGE(8,arr,2,indices);
  for(int i:ans) cout << i << " ";
}
