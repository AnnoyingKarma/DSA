#include <iostream>
#include <stack>
using namespace std;

int main(){
  string s;
  cin>>s;
  int i=s.length()-1;
  stack<string> st;
  while(i>=0){
    if(isalnum(s[i])) st.push(string()+s[i]);
    else{
      string temp="(";
      temp+=st.top();
      st.pop();
      temp+=s[i]+st.top()+')';
      st.pop();
      st.push(temp);
    }
    i--;
  }
  cout << st.top() << "\n";
}
