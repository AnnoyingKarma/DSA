#include <iostream>
#include <math.h>
#include <set>
using namespace std;

void print_divisor(int n){
  set<int> st;
  for(int i=1; i<=sqrt(n); i++){
    if(n%i==0){
      st.insert(n/i);
      st.insert(i);
    }
  }
  for(auto it:st) cout << it << " ";
  
}

int main(){
  print_divisor(20);
}
