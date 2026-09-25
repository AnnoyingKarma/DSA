#include <iostream>
#include <vector>

using namespace std;
/*
bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n=matrix.size();
  int m=matrix[0].size();
  int low=0, high=n-1;

  for(int i=0; i<n; ++i){
  if(target>=matrix[i][0] && target<=matrix[i][m-1]){

    int l=0;
    int h=m-1;
    while(l<=h){
      int m=l+(h-l)/2;
      if(target<matrix[i][m]) h=m-1;
      else if(target>matrix[i][m]) l=m+1;
      else return true;
    }
  }

  }
  return false;
}
*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n=matrix.size(),m=matrix[0].size();
  int row=0,col=m-1;
  while(row<n && col>=0){
    if(matrix[row][col]==target) return true;
    if(matrix[row][col]<target) row++;
    else col--;
  }
  return false;
}

int main(){
  vector <vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
  cout << searchMatrix(matrix,1);
}