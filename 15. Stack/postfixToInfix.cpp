#include <iostream>
#include <stack>

using namespace std;

int main(){
  
  string s; 
  cin>>s;
  stack<string> st;
  
  for(char i:s){
    if(isalnum(i)) st.push(string() + i);
    else{
      string a=st.top();
      st.pop();
      string b=st.top();
      st.pop();
      string temp = '('+b+i+a+')';
      st.push(temp);
    }   
  }
  cout << st.top() << '\n';
}
