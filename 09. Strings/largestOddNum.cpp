#include <iostream>
using namespace std;

string largestOddNumber(string num) {
  int n=num.size()-1;
  for(int i=n; i>=0; --i){
    if(num[i]==49 || num[i]==51 || num[i]==53 || num[i]==55 || num[i]==57) return num;
    else num.pop_back();
  }
  return num;
}

int main(){
  string num="35427";
  cout << largestOddNumber(num);
}