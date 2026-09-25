#include <iostream>
#include <stack>
#include <vector>
using namespace std;

long long subArrayRanges(vector<int> &nums){
  int n=nums.size();
  stack<int> st;
  vector<int> pse(n),nse(n),pge(n),nge(n);

  //previous smaller element
  for(int i=0; i<n; i++){
    if(st.empty()) pse[i]=-1;
    else{
      while(!st.empty()&&nums[st.top()]>=nums[i]) st.pop();
      if(!st.empty()) pse[i]=st.top();
      else pse[i]=-1;
    }
    st.push(i);
  }
  while(!st.empty()) st.pop(); 

  //next smaller element
  for(int i=n-1; i>=0; i--){
    if(st.empty()) nse[i]=n;
    else{
      while(!st.empty()&&nums[st.top()]>nums[i]) st.pop();
      if(!st.empty()) nse[i]=st.top();
      else nse[i]=n;
    }
    st.push(i);
  }
  while(!st.empty()) st.pop(); 
  
 // previous greater element
  for(int i=0; i<n; i++){
    if(st.empty()) pge[i]=-1;
    else{
      while(!st.empty()&&nums[st.top()]<=nums[i]) st.pop();
      if(!st.empty()) pge[i]=st.top();
      else pge[i]=-1;
    }
    st.push(i);
  }
  while(!st.empty()) st.pop(); 

  // next greater element
  for(int i=n-1; i>=0; i--){
    if(st.empty()) nge[i]=n;
    else{
      while(!st.empty()&&nums[st.top()]<nums[i]) st.pop();
      if(!st.empty()) nge[i]=st.top();
      else nge[i]=n;
    }
    st.push(i);
  }
  while(!st.empty()) st.pop(); 

  long long total=0;

  for(int i=0; i<n; i++){
    long long smallerSum=(long long)(i-pse[i])*(nse[i]-i)*nums[i];
    long long greaterSum=(long long)(i-pge[i])*(nge[i]-i)*nums[i];
    total+=greaterSum-smallerSum;
  }

  return total;

}

int main(){
  vector<int> nums={1,3,3};
  cout << subArrayRanges(nums);
}
