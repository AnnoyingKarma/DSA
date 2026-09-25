#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


/*
double findSmallestMaxDist(vector<int> &stations, int k) {
  // Code here
  int n=stations.size();
  vector<int> distanceLength(n-1,0);
  for(int i=0; i<k; ++i){
  double maxDiffernce=INT_MIN; 
  int index=-1;
    for(int j=0; j<n-1; ++j){
      double difference=(stations[j+1]-stations[j])/(double)(distanceLength[j]+1);
      if(maxDiffernce<difference){
        maxDiffernce=difference;
        index=j;
      }
    }
    distanceLength[index]++;
  }

  double ans=-1;
  for(int i=0; i<n; ++i){
    double temp=((stations[i+1]-stations[i])/(double)(distanceLength[i]+1));
    ans=max(ans,temp);
  }
  return ans;
}
*/

double findSmallestMaxDist(vector<int> &stations, int k) {
  int n=stations.size();
  double ans=0.0;
  double minValue=0,maxValue=stations[n-1]-stations[0];
  
  while(minValue<=maxValue){
    double mid=minValue+(maxValue-minValue)/2;

    int cnt=0;
    for(int i=1; i<n; ++i){
      double difference = stations[i]-stations[i-1];
      if(difference>mid){
        cnt+=(difference/mid);
      }
    }
    if(cnt>k){
      minValue=mid+0.01;
    }
    else{
      ans=mid;
      maxValue=mid-0.01;
    }

  }  
  return ans;
}


int main(){

  vector<int> stations={1,2,3,4,5,6,7,8,9,10};
  cout << fixed << setprecision(2) << findSmallestMaxDist(stations,9);

}