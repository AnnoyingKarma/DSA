#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> jobSequencing(vector<int> &deadline, vector<int> & profit){
  unordered_map<int,int> store;
  int len = deadline.size();
  for(int i=0; i<len; ++i){
    store[deadline[i]] = max(store[deadline[i]],profit[i]);
    cout << store[deadline[i]] << " ";
  }
  int jobCount=0,maxProfit=0;
  for(auto it=store.begin(); it!=store.end(); ++it){
    ++jobCount;
    maxProfit+=it->second;
  }
  return {jobCount,maxProfit};
}

int main(){
  vector<int> deadline = {3,1,2,2};
  vector<int> profit = {50,10,20,30};
  vector<int> ans = jobSequencing(deadline,profit);
  for(int it:ans) cout << it << " ";
}