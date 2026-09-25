#include <iostream>
#include <vector>
using namespace std;

void subSeq(int i,int n,vector<int> arr,vector<int> emp){
  if(i>=n){
    for(auto it:emp)cout << it << " ";
    cout << "\n";
    return;
  }
  emp.push_back(arr[i]);
  subSeq(i+1,n,arr,emp);

  emp.pop_back();
  subSeq(i+1,n,arr,emp);

}

int main(){

  vector<int> arr={3,2,1};
  int n=arr.size();
  subSeq(0,n,arr,{});
}