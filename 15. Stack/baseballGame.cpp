#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int calPoints(vector<string> &operations){
  stack<int> si;
  int len = operations.size();
  int ans=0; 
  for(int i=0; i<len; ++i){
    if(operations[i]=="+"){
      int temp=si.top();
      si.pop();
      int sum=temp+si.top();
      si.push(temp);
      si.push(sum);
      ans+=si.top();
    }
    else if(operations[i]=="D"){
      si.push(si.top()*2);
      ans+=si.top();
    }
    else if(operations[i]=="C"){
      ans-=si.top();
      si.pop();
    }
    else{
      si.push(stoi(operations[i]));
      ans+=si.top();
    }
  }
  
  return ans;
}

int main(){
  vector<string> operations={"5","2","C","D","+"};
  cout << calPoints(operations);
}