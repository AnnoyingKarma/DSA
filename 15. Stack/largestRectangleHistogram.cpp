#include <iostream>
#include <vector>
#include <stack>

using namespace std;
//optimized but not much
int largestRectangleArea(vector<int> & heights){
  int n=heights.size();
  vector<int> left(n),right(n);
  stack<int> st;

  for(int i=0; i<n; i++){
    while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();
    if(st.empty()) left[i]=0;
    else left[i]=st.top()+1;
    st.push(i);
  }

  while(!st.empty()) st.pop();

  for(int i=n-1; i>=0; i--){
    while(!st.empty() && heights[i]<heights[st.top()]) st.pop();
    if(st.empty()) right[i]=n-1;
    else right[i]=st.top()-1;
    st.push(i);
  }

  int ans=0;
  for(int i=0; i<n; i++){
    int temp=((right[i]-left[i])+1)*heights[i];
    ans=max(ans,temp);
  }
  return ans;
}

//optimized a bit
largetRectangleArea1(vector<int>& heights){
  int n=heights.size(),ans=0;
  stack<int> st;

  for(int i=0; i<n; i++){
    while(!st.empty() && heights[i]<=heights[st.top()]){
      int topVal=st.top();
      st.pop();
      int prev = (st.empty()) ? -1:st.top();
      int temp=(i-prev-1)*heights[topVal];
      ans=max(temp,ans);
    }
    st.push(i);
  }
  while(!st.empty()){
      int topVal=st.top();
      st.pop();
      int prev = (st.empty()) ? -1:st.top();
      int temp=(n-prev-1)*heights[topVal];
      ans=max(temp,ans);
  }
  return ans;

}

int main(){
  vector<int> heights={2,1,5,6,2,3};
  cout << largestRectangleArea(heights);
}
