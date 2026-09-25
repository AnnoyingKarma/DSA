#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  vector<vector<int>> ans;
  int n=intervals.size();
  
  sort(intervals.begin(), intervals.end());

  int start=intervals[0][0],end=intervals[0][1];
  for(int i=1; i<n; i++){
    int one=intervals[i][0],two=intervals[i][1];
    if(two<=end){
      continue;
    }
    else if(two>end && one<=end){
      end=two;
    }
    else if(two>end && one>end){
      ans.push_back({start,end});
      start = one;
      end = two;
    }

  }
  ans.push_back({start,end});
  return ans;

}

int main(){
  vector<vector<int>> ans;
  vector<vector<int>> q={{1,2},{0,4},{100,20},{20,3},{0,10},{120,130}};

  ans=merge(q);
  for(auto i:ans){
    for(auto j:i){
      cout << j << " ";
    }
    cout << "\n";
  }
}