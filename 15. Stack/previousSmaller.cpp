#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> prevSmaller(vector<int> &A){
  stack<int> sti;
  vector<int> vei;

  int len=A.size();
  for(int i=0; i<len; i++){
    while(!sti.empty() && sti.top()>=A[i]) sti.pop();
    if(sti.empty()) vei.push_back(-1);
    else vei.push_back(sti.top());
    sti.push(A[i]);
  }
  
  return vei;

}

int main(){
  vector<int> A={4,5,2,10,8};
  vector<int> ans=prevSmaller(A);
  for(int i:ans) cout << i << " ";
}
