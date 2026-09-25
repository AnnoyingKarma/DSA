#include <iostream>
using namespace std;

void nto1(int n){
  if(n==1) {
    cout << 1;
    return;
  }
  cout << n << "\n";
  nto1(n-1); 
}

int main(){
  nto1(10);
}