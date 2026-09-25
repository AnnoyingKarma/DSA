#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//o(n*n) brute maybe
int sumSubarrayMin1(vector<int>& arr){
  unsigned long long total=0,modVal=1000000007;
  int n=arr.size();

  if(n==1) return arr[0];

  for(int i=0; i<n; i++){
    int mini=arr[i];
    total+=mini;
    for(int j=i+1; j<n; j++){
      if(mini>arr[j]) mini=arr[j];
      total+=mini;
      total%=modVal;
    }
  }
  return total;
}

//optimized
int sumSubarrayMin(vector<int>& arr){
  unsigned long long total=0,modVal=1000000007;
  int n=arr.size();
  vector<int> left(n);
  vector<int> right(n);
  stack<int> st;
 
  //finding previous smallest element 
  for(int i=0; i<n; i++){
    while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
    if(st.empty()) left[i]=-1;
    else left[i]=st.top();
    st.push(i);
  }

  while(!st.empty()) st.pop();
  
  // now next smallest element 
  for(int i=n-1; i>=0; i--){
    while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
    if(st.empty()) right[i]=n;
    else right[i]=st.top();
    st.push(i);
  }
  
  for(int i=0; i<n; i++){
    long long count = ((i-left[i])*(right[i]-i));
    total=(total+arr[i]*count)%modVal;
  }

  return total;

}


int main(){
  vector<int> arr = {11,81,94,43,3};
  cout << sumSubarrayMin1(arr) << '\n';
}
