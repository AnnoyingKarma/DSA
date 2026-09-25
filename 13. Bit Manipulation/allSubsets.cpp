#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> subset(vector<int> &num){
  vector<vector<int>> ans;
  int n=num.size();
  int a = 1<<n;

  for(int i=0; i<a; i++){
    vector<int> temp;
    for(int j=0; j<n; j++){
      if((i>>j)&1==1){
        temp.push_back(num[j]);
      }
    }
    ans.push_back(temp);
  }
  return ans;
}

int main(){

  vector<int> num={1,2,3};
  vector<vector<int>>ans=subset(num);

  for(auto i:ans){
    for(auto j:i){
      cout << j << " ";
    }
    cout << "\n";
  }
  
}