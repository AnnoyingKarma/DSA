#include <iostream>
#include <vector>

using namespace std;

int findKRotation(vector<int> &arr) {
  int s=0,e=arr.size()-1,ans=0,lowest=INT_MAX;

  while(s<=e){
    int m=s+((e-s)/2);


    if(arr[s]<=arr[m]){
      if(lowest>=arr[s]){
        lowest=arr[s];
        ans=s;
      }
      s=m+1;
    }
    else{
      if(lowest>=arr[m]){
        lowest=arr[m];
        ans=m;
      }
      e=m-1;
    }
    if(arr[s]==arr[m] && arr[m]==arr[e]){
      if(lowest>arr[e]){
        lowest=arr[e];
        ans=e;
      }
      ++s,--e;
    }
  }
  return ans;
}


int main(){
  vector<int> arr={3,4,4,4,4,4,5,5,5,5,5,0,0,0,0,0,1,2,2,2,2,3,3,3,3};
  cout << findKRotation(arr);
}