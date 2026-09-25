#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int median(vector<vector<int>> &matrix, int R, int C){
  int low=matrix[0][0],high=matrix[0][C-1];
  for(int i=1; i<R; ++i){
    low=min(low,matrix[i][0]);
    high=max(high,matrix[i][C-1]);
  }
  int n=R*C;
  int median=(R*C)/2;

  while(low<=high){

    int mid=low+(high-low)/2;
    int cnt=0;
    for(int i=0; i<R; i++){
      cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid)-matrix[i].begin();
    }
    
    if(cnt<=median) low=mid+1;
    else high=mid-1;

    
  }
  return low;

}

int main(){
  vector<vector<int>> matrix={{1,3,5},{2,6,9},{3,5,9}};
  cout << median(matrix,3,3);
}