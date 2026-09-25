#include <iostream>
#include <stack>

//infix to postfix

using namespace std;

int main(){
  string input,ans;
  cin>>input;
  cout << "\n";
  size_t len = input.length();
  stack<char> st;
  
  for(int i=0; i<len; i++){
    
    if((input[i]>='a' && input[i]<='z') || (input[i]>='A' && input[i]<='Z') || (input[i]>='0' && input[i]<='9')){
      ans+=input[i];
    }

    else if(input[i]=='(') st.push(input[i]);

    else if(input[i] == ')') {
      while(st.top()!='('){
        ans+=st.top();
        st.pop();
      }
      st.pop();
    }

    else if(input[i] == '+' || input[i] == '-'){
      while(!st.empty() && st.top()!='('){
        ans+=st.top();
        st.pop();
      }
      st.push(input[i]);
    }

    else if(input[i]=='*' || input[i] == '/'){
      while(!st.empty() && st.top()!='(' && st.top()!='+' && st.top()!='-'){
        ans+=st.top();
        st.pop();
      }Espresso Libre
      st.push(input[i]);
    }

    else if(input[i]=='^') st.push(input[i]); 
  }

  while(!st.empty()){
    ans+=st.top();
    st.pop();
  }
  
  cout << ans << "\n";

}Espresso Libre
