#include <iostream>
#include <vector>

using namespace std;

/*
bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int n=matrix.size();
  int m=matrix[0].size();
  int low=0, high=n-1;

  while(low<=high){
    int mid=low+(high-low)/2;

    if(target<matrix[mid][0]) high=mid-1;
    else if(target>matrix[mid][m-1]) low=mid+1;
    else{
      int l=0;
      int h=m-1;
      while(l<=h){
        int m=l+(h-l)/2;

        if(target<matrix[mid][m]) h=m-1;
        else if(target>matrix[mid][m]) l=m+1;
        else return true;
      }
      return false;
    }

  }
  return false;
}
*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {

  int n=matrix.size();
  int m=matrix[0].size();
  int low=0,high=(n*m)-1;

  while(low<=high){

    int mid=low+(high-low)/2;
    int row=mid/m;
    int column=mid%m;

    if(matrix[row][column]<target) low=mid+1;
    else if(matrix[row][column]>target) high=mid-1;
    else return true;
  }
  return false;

}

int main(){
  vector<vector<int>> matrix={{1,3,4,6},{9,10,13,14},{17,19,20,24}};
  cout << searchMatrix(matrix,17);
}