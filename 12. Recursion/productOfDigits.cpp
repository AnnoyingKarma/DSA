#include <iostream>
using namespace std;

int product(int n){
  if(n==0)return 1;
  return n%10*product(n/10);
}

int main(){
  cout << product(172);
}
