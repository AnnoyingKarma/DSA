#include <iostream>
#include <vector>

using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
  vector<int> ans(2,-1);
  int n=mat.size(),m=mat[0].size();

  int low=0,high=m-1;

  while(low<=high){

  int mid=low+(high-low)/2;
  int maxValue=mat[0][mid],row=0,col=mid;
  for(int i=1; i<n; ++i){
    if(maxValue<mat[i][mid]){
      row=i;
      col=mid;
      maxValue=mat[i][mid];
    }
  }
  int value=mat[row][col];
  int left=(col-1<0) ? -1 : mat[row][col-1];
  int right=(col+1>=m) ? -1 : mat[row][col+1];
  
  if(value>left&&value>right){
    ans[0]=row,ans[1]=col;
    return ans;
  }
  else if(value>=left) low=mid+1;
  else high=mid-1;
  }
  return ans;
}

int main(){

  vector<vector<int>> mat={{1,2,6},{3,4,5}};
  vector<int> ans=findPeakGrid(mat);
  for(auto it:ans) cout << it << " ";
}