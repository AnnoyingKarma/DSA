#include <iostream>
#include <algorithm>

using namespace std;

string reverseWords(string s) {
  int n=s.size()-1;
  string ans="";
  string temp="";
  for(int i=n; i>=0; --i){
    if(s[i]!=' '){
      temp+=s[i];
    }
    else if(s[i]==' ' && temp!=""){
      reverse(temp.begin(),temp.end());
      ans+=temp+' ';
      temp="";
    }
  }
  if(s[0]!=' ') reverse(temp.begin(),temp.end());
  ans+=temp;
  if(ans[ans.size()-1]==' ') ans.pop_back();
  return ans;
}

int main(){
  string s="ok i     get     it    alright    ";
  cout << reverseWords(s);
}