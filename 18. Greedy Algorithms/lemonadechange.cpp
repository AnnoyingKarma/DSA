#include <iostream>
#include <vector>

using namespace std;

bool lemonadeChange(vector<int>& bills){
  int five=0,ten=0;
  size_t len=bills.size();
  for(size_t i=0; i<len; ++i){
    switch(bills[i]){
      case 5:
        ++five;
        break;

      case 10:
        if(five<=0)return false;
        --five,++ten;
        break;

      case 20:
        if(five>0 && ten>0){
          --five,--ten;
        }
        else if(five>2){
          five-=3;
        }
        else return false;
        break;
    }
  }
  return true;
}

int main(){
  vector<int> bills={5,5,5,5,10,20};
  cout << lemonadeChange;
}