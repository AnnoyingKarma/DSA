#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rowWithMax1s(vector<vector<int> > arr) {

  int n=arr.size();
  int m=arr[0].size();
  int cnt=-1,maxValue=0,ans=-1;

  for (auto ar:arr){
    auto it=lower_bound(ar.begin(),ar.end(),1);
    int pos= distance(it,ar.end());
    cnt++;
    if(maxValue<pos){
      maxValue=max(pos,maxValue);
      ans=cnt;
    }
  }
  return ans;
}

int main(){

  vector<vector<int>> arr={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  cout << rowWithMax1s(arr);
}