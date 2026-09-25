#include <iostream>
using namespace std;

bool check(int n){
  for(int i=2; i*i<=n; i++){
    if(n%i==0) return true;
  }
  return false;
}

int main(){
  cout << check(10);
}
