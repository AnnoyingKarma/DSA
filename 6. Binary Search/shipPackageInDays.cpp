#include <iostream>
#include <vector>

using namespace std;


int shipWithinDays(vector<int>& weights, int days) {

  int n=weights.size(),minValue=weights[0],maxValue=0,lessDays=INT_MAX;

  for(int i=0; i<n; ++i){
    minValue=max(minValue,weights[i]);
    maxValue+=weights[i];
  }

  while(minValue<=maxValue){
    int mid=minValue+((maxValue-minValue)/2);
    long long temp=0;    
    int cnt=0;
    for(int i=0; i<n; ++i){
      temp+=weights[i];
      if(temp>mid){
        cnt++;
        temp=weights[i];
      }
    }
    ++cnt;
    if(cnt>days){
      minValue=mid+1;
    }
    else{
      lessDays=min(mid,lessDays);
      maxValue=mid-1;
    }
  }
  return lessDays;
}



int main(){

  vector<int> weights={1};

  cout << shipWithinDays(weights, 3);
  


}