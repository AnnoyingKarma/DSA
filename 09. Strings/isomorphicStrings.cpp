#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
  int n=s.size();

  unordered_map<char,char> um;
  unordered_map<char,char> umm;

  for(int i=0; i<n; ++i){
    um[s[i]]=t[i];
    umm[t[i]]=s[i];
  }

  

}


int main(){
  cout << isIsomorphic("bar","foo");
}