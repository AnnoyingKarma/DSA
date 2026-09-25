#include <iostream>
#include <vector>

using namespace std;

int totalFruit(vector<int>& fruits){
  pair<int,int> basketOne={-1,0};
  pair<int,int> basketTwo={-1,0};
  int len=fruits.size();
  int lp=0;
  int ans=0;
  for(int rp=0; rp<len; rp++){
    if(basketOne.first == -1){
      basketOne.first=fruits[rp];
      basketOne.second++;
    }else if (basketTwo.first == -1 && fruits[rp]!= basketOne.first){
      basketTwo.first = fruits[rp];
      basketTwo.second++;
    }else{
      if(fruits[rp]==basketOne.first) basketOne.second++;
      else if(fruits[rp]==basketTwo.first) basketTwo.second++;
      else{
        while(lp<rp && basketOne.second>0 && basketTwo.second>0){
          if(basketOne.first==fruits[lp]) lp++,basketOne.second--;
          else if(basketTwo.first==fruits[lp]) lp++,basketTwo.second--;
        }
        if(basketOne.second==0) basketOne.first=fruits[rp],basketOne.second++;
        else if(basketTwo.second==0) basketTwo.first=fruits[rp],basketTwo.second++;
      }
    }
    cout << basketOne.first <<basketOne.second << " " << basketTwo.first << basketTwo.second << " " << lp << "\n";

    if(ans<rp-lp+1)ans=rp-lp+1;
  }
  return ans;
}

int main(){
  vector<int> data = {1,2,1,3,4,3,5,1,2};
  int ans = totalFruit(data);
  cout << ans;
}