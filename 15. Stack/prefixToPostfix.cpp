#include <iostream>
#include <stack>

using namespace std;

int main(){
  string s;
  cin>>s; stack<string> st;
  int i=s.length()-1;
  while(i>=0){
    if(isalnum(s[i])) st.push(string()+s[i]);
    else{
      string temp=st.top();
      st.pop();
      temp+=st.top()+s[i];
      st.pop();
      st.push(temp);
    }
    i--;
  }
  cout << st.top();
}
