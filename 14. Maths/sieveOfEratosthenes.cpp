#include <iostream>
#include <vector>
using namespace std;



int countPrime(int n){
  vector<bool> check(n,false);
  int cnt=0;
  for(int i=2; i*i<=n; i++){
    if(!check[i]){
      cnt++;
      for(int j=i*i; j<n; j+=i){
        check[j]=true;
      }
    }
  }
  return cnt;
}

int main(){
  cout << countPrime(100);
}