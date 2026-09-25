#include <iostream>
using namespace std;

int switchedValue(int n,int i){
  int a=1;
  a=a<<i;
  return n^a;
}

void solve(int num,int i){
  i--;
  int n=num;
  n=n>>i;
  if(n&1!=0){
    cout << 1 << " ";
    cout << num << " " << switchedValue(num,i);
  }
  else{
    cout << 0 << " ";
    cout << switchedValue(num,i) << " " << num;
  }
}

int main(){
  solve(70,3);
  cout << "\n";
  solve(8,1);
}