#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids){
  stack<int> st;
  vector<int> result;

  int n=asteroids.size();
  
  for(int i=0; i<n; i++){
    if(asteroids[i]>0)st.push(asteroids[i]);
    else{
      if(st.empty()) result.push_back(asteroids[i]);
      else {
        while(!st.empty() && abs(asteroids[i])>st.top()) st.pop();
        if(!st.empty() && abs(asteroids[i])==st.top())st.pop();
        else if(st.empty()) result.push_back(asteroids[i]);
      }
    }
  }

  if(!st.empty()){
    int t=result.size()+st.size();
    result.resize(t);
    --t;
    while(!st.empty()){
      result[t]=st.top();
      st.pop(),t--;
    }
  }

  return result;
}

int main(){
  vector<int> asteroids={8,-8};
  vector<int> result=asteroidCollision(asteroids);
  for(int i:result) cout << i << " ";
}

