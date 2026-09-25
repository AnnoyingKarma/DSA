#include <iostream>
using namespace std;

void OneToN(int n){
  if(n<1) return;
  OneToN(n-1);
  cout << n << " ";
}

void NToOne(int n){
  if(n<1) return;
  cout << n << " "; 
  NToOne(n-1);
}

int main(){
  OneToN(10);
  cout << "\n";
  NToOne(10);
}