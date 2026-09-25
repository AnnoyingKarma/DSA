#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){

    int stalls,cows,x;
    cin>>stalls>>cows;
    vector<int> stallsPosition(stalls,0);
    for(int i=0; i<stalls; ++i){
      cin>>x;
      stallsPosition[i]=x;
    }

    //aggressive cows

    int ans=-1;

    sort(stallsPosition.begin(),stallsPosition.end());


    int s=0;
    int e=stallsPosition[stalls-1]-stallsPosition[0];

    while(s<=e){
      
      int mid=s+(e-s)/2;
      int cnt=0,totalCows=1;
      for(int i=1; i<stalls; ++i){
        cnt+=stallsPosition[i]-stallsPosition[i-1];
        if(cnt>=mid){
          totalCows++;
          cnt=0;
        }
        if(totalCows>=cows) break;
      }

      if(totalCows>=cows){
        ans=max(mid,ans);
        s=mid+1;
      }
      else{
        e=mid-1;
      }

    }

    cout << ans << "\n";

  }  

}