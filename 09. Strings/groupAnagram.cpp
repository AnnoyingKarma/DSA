#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  vector<vector<string>> ans;
  unordered_map<string,int> um;
  int n=strs.size();
  for(int i=0; i<n; i++){
    sort(strs[i].begin(),strs[i].end());    
  }
  vector<string> temp;
  temp.push_back(strs[0]);
  int i=0;
  while(i<n){
    if(strs[i]==strs[i+1]){ 
      temp.push_back(strs[i+1]);
      ++i;
    }
    else{
      ans.push_back(temp);
      ++i;
      temp.clear();
      temp.push_back(strs[i]);
    }
  }
  return ans;

}

int main(){
  vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
  vector<vector<string>> ans=groupAnagrams(strs);

  for(auto i:ans){
    for(auto j:i){
      cout << j << " ";
    }
    cout << "\n";
  }

}