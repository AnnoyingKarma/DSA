#include <iostream>
using namespace std;

int basicSumOfN(int n, int sum){
  if(n==0) return sum;
  return basicSumOfN(n-1, sum+n);
}

int sumOfN(int n){
  if(n==0) return 0;
  return n+sumOfN(n-1);
}

int main(){
  int sum = basicSumOfN(10,0);
  cout << sum << " ";
  sum=sumOfN(10);
  cout << sum << " ";
}