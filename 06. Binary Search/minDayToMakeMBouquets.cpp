#include <iostream>
#include <vector>

using namespace std;

int minDays(vector<int>& bloomDay, int m, int k) {
  int n=bloomDay.size();
  int minimumAns=INT_MAX;
  if(1ll*m*k>n){ 
    return -1;
  }    
  int maxValue=bloomDay[0],minValue=bloomDay[0];
  for(int i=1; i<n; ++i){
    maxValue=max(maxValue,bloomDay[i]);
    minValue=min(minValue,bloomDay[i]);
  }
  while(minValue<=maxValue){
    int cnt=0,ans=0;
    int mid=minValue+((maxValue-minValue)/2);

    for(int i=0; i<n; ++i){
      
      if(bloomDay[i]<=mid){
        cnt++;
      } 
      else{
        cnt=0;
      }     
      if(cnt==k){
        ans++;
        cnt=0;
      }
    } 
    if(ans<m){
      minValue=mid+1;
    }
    else {
      minimumAns=min(mid,minimumAns);
      maxValue=mid-1;
    }
  }
  return minimumAns;

}

int main(){
  vector<int> bloomDays={1,10,3,10,2};
  cout << minDays(bloomDays,89945,32127);
}