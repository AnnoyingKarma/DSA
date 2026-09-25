#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;
/*
string frequencySort(string s) {


  int n=s.size();
  unordered_map<char,int> umap;

  for(int i=0; i<n; ++i){
    umap[s[i]]++;
  }
  vector<pair<char, int>> vec(umap.begin(), umap.end());
  sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });


  string ans;
  for(auto it:vec){
    ans.append(it.second,it.first);
  }
  return ans;

}
*/

string frequencySort(string s){

  int n=s.size();
  unordered_map<char,int> umap;
  for(int i=0; i<n; ++i){
    umap[s[i]]++;
  }

  priority_queue<pair<int, char>> pq;

  for(auto it:umap) pq.push(make_pair(it.second,it.first));

  string ans;
  while(!pq.empty()){
    pair<int,char> temp=pq.top();
    ans.append(temp.first,temp.second);
    pq.pop();
  }
  return ans;
}

int main(){

  cout << frequencySort("raaeaedere");
}