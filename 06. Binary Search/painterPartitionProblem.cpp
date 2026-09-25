#include <iostream>
#include <vector>

using namespace std;


int findLargestMinDistance(vector<int> &boards, int k)
{
  int ans=-1;
  int n=boards.size();
  long long maxValue=0,minValue=boards[0];
  for(int i=0; i<n; ++i){
    maxValue+=boards[i];
    minValue=max(minValue,boards[i]*1ll);
  }
  
  while(minValue<=maxValue){

    int cnt=1;
    long long mid=minValue+(maxValue-minValue)/2,sum=0;
    for(int i=0; i<n; ++i){
      sum+=boards[i];
      if(sum>mid){
        sum=boards[i];
        cnt++;
      }
    }

    if(cnt>k){
      minValue=mid+1;
    }
    else{
      ans=mid;
      maxValue=mid-1;
    }
  
  }
  return ans;

}

int main(){

  vector<int> boards={2,1,5,6,2,3};
  cout << findLargestMinDistance(boards,2);

}