#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr,int lp,int rp){
  if(lp>=rp) return;
  reverse(arr,lp+1,rp-1);
  swap(arr[lp],arr[rp]);
}

void reverse(vector<int> &arr, int ip){
  if(ip>=arr.size()-ip-1) return;
  reverse(arr,ip+1);
  swap(arr[ip],arr[arr.size()-ip-1]);
}

int main(){
  vector<int> arr={1,2,3,4,5,6,7,8};
  int rp=arr.size()-1;
  reverse(arr,0,rp);
  for(auto it:arr){
    cout << it << " ";
  }
  arr={1,2,3,4,5,6,7,8};
  cout << "\n";
  for(auto it:arr) cout << it << " ";
  cout << "\n";
  reverse(arr,0);
  for(auto it:arr){
    cout << it << " ";
  }
}