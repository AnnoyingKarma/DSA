#include <iostream>
#include <stack>
using namespace std;

int main(){
  string s;
  cin>>s;
  stack<string> st;

  for(char i:s){
    if(isalnum(i)) st.push(string()+i);
    else{
      string second=st.top();
      st.pop();
      string first=st.top();
      st.pop();
      st.push(i+first+second);
    }
  }
  cout << st.top();
}
