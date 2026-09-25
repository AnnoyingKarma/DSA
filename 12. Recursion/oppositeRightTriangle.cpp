#include <iostream>
using namespace std;

void rev(int n){
  if(n==0) return;
  for(int i=0; i<n; ++i)cout <<"* ";
  cout << "\n";
  return rev(n-1);
}

int main(){
  rev(5);
}
