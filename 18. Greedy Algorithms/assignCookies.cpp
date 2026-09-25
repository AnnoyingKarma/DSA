#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findContentChildren( vector<int>& g, vector<int>& s){

  int ans=0;
  sort(s.begin(),s.end());
  sort(g.begin(),g.end());

  size_t len = g.size(),cookieLen = s.size();
  int cookie = 0;

  for(size_t i=0; i<len; ++i){
    while(cookie<cookieLen && s[cookie]<g[i])++cookie;
    if(cookie>=cookieLen) return ans;
    ++ans,++cookie;
  }

  return ans;

}

int main(){
  vector<int> g={1,2};
  vector<int> s={1,2,3};
  cout << findContentChildren(g,s);
}