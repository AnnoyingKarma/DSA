#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int maximalRectangle(vector<vector<char>> & matrix){

  int row=matrix.size();
  int col=matrix[0].size();
  
  vector<int> values(col,0);

  stack<int>st;
  int ans=0;

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(matrix[i][j]=='1') values[j]+=1;
      else values[j]=0;
    }

    for(int i=0; i<col; i++){
      while(!st.empty() && values[i]<=values[st.top()]){
        int topVal=st.top();
        st.pop();
        int prev=st.empty() ? -1:st.top();
        int temp=(i-prev-1)*values[topVal];
        ans=max(ans,temp);
      }
      st.push(i);
    }

    while(!st.empty()){
      int topVal=st.top();
      st.pop();
      int prev=st.empty() ? -1:st.top();
      int temp=(col-prev-1)*values[topVal];
      ans=max(ans,temp);
    }

  }

  return ans;
}

int main(){
  vector<vector<char>> matrix={{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
  cout << maximalRectangle(matrix);
}
