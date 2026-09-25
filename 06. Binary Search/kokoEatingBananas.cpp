#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int minEatingSpeed(vector<int>& piles, int h) {
  int n=piles.size();
  int maxValue=piles[0],minAns=INT_MAX;
  for(int i=0; i<n; i++){
    maxValue=max(maxValue,piles[i]);
  }

  int s=1,e=maxValue,mid=maxValue;
  while(s<=e){
    int cnt=0;

    for(int i=0; i<n; i++){
      int temp=piles[i];
      
      if(temp<=mid) ++cnt;
      else if(temp>mid) { 
        cnt+=((1ll*temp+mid-1)/mid);
      }

    }
    
    if(cnt>h){
      s=mid+1;
    }
    else{
      minAns=min(minAns,mid);
      e=mid-1;
    }
    mid=s+((e-s)/2);
  }
  return minAns;
}

int main(){

  vector<int> piles={1000000000};
  cout << minEatingSpeed(piles, 2);

}