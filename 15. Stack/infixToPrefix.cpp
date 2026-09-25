#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int presidence(char a){
  switch(a){
    case '+': case '-':
      return 1;
    case '/': case '*':
      return 2;
    case '^':
      return 3;
  }
  return -1;
}

int main(){
  string s,ans;
  cin>>s;
  size_t end=s.length()-1,start=0;
  while(start<=end){
    swap(s[start],s[end]);
    if(s[start]=='(') s[start]=')';
    else if(s[start]==')') s[start]='(';
    if(start==end) break;
    if(s[end]=='(') s[end]=')';
    else if(s[end]==')') s[end]='(';
    
    start++,end--;
  }

  cout << s << "\n";
  end=s.length();
  stack<char> st;
  // code 
  for(int i=0; i<end; i++){
    if(s[i]=='(') st.push('(');
    else if(s[i]==')'){
      while(st.top()!='('){
        ans+=st.top();
        st.pop();
      }
      st.pop();
    }
    else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
      ans+=s[i];
    }
    else if (s[i]=='^') {
      if(!st.empty() && st.top()=='^'){
        ans+=st.top();
        st.pop();
      } 
      st.push(s[i]);
    }
    else{
      while(!st.empty() && st.top()!='(' && presidence(s[i])<presidence(st.top())){
        ans+=st.top();
        st.pop();
      }
      st.push(s[i]);
    }

  }


  while(!st.empty()){
    ans+=st.top();
    st.pop();
  }

  reverse(ans.begin(),ans.end());
  cout << ans << "\n";
}
