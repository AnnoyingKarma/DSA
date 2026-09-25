#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s){
	stack<char> st;
	int len = s.length();

	for(size_t i =0; i<len; i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);
		}
		else {
			if(st.empty()) return false;
			if(s[i]-1==st.top() || s[i]-2==st.top()){
				st.pop();
			}
			else return false;
		}
	}
	if(st.empty())return true;
	return false;
}

int main(){
	cout << isValid("([(])");
}
