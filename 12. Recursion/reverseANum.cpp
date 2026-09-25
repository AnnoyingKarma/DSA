#include <iostream>
using namespace std;

/*string reverseNum(int n){
  if(n%10==n)return to_string(n);
  return to_string(n%10)+reverseNum(n/10);
}
*/

int reverseNum(int n,int reversed=0){
  if(n==0)return reversed;
  return reverseNum(n/10,reversed*10+n%10);
}

int main(){
  cout << reverseNum(123);
}