#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
  
  int n=strs[0].size();
  int m=strs.size();
  string ans;

  for(int i=0; i<n; ++i){
    for(int j=0; j<m; ++j){
      if(strs[0][i]!=strs[j][i] || i==strs[j].size()){
        return ans;
      } 
    }
    ans+=strs[0][i];
  }
  return ans;

}

int main(){
  vector<string> strs={"flower","flow","flight"};
  cout << longestCommonPrefix(strs);
}