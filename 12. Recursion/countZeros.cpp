#include <iostream>
using namespace std;

int count(int n,int cnt=0){
  if(n%10==0) cnt++;
  if(n%10==n){
    return cnt;
  }
  return count(n/10,cnt);

}

int main(){
  cout << count(1010101);
}
