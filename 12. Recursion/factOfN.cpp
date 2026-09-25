#include <iostream>
using namespace std;

int factOfN(int n){
  if(n==1) return 1;
  return n * factOfN(n-1);
}

int main(){
  int fact=factOfN(5);
  cout << fact << " ";
}