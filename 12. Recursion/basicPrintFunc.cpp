#include <iostream>
using namespace std;

void f(int n){
  if(n==0) return;
  f(--n);
  cout << n << "\n";
}

int main(){
 
  f(10);
}