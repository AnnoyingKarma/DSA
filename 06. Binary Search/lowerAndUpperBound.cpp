#include <iostream>
#include <vector>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    
    int f=-1,c=INT_MAX;
    
    for(int i=0; i<n; ++i){
        if(arr[i]==x){
            return {x,x};
        }
        else if(arr[i]>x&&c>arr[i]){
            c=arr[i];
        }
        else if(arr[i]<x&&f<arr[i]){
            f=arr[i];
        }
    }
    if(c==INT_MAX) c=-1;
    return {f,c};
}
//find floor ans<=target
int findFloor(vector<long long> v, long long n, long long x) {
  long long e=--n,s=0;
  long long m= s+((e-s)/2);
  int rv=-1;
  while(s<=e){
    if(v[m]==x){
     return m;
    }
    else if(v[m]<x){
      s=m+1;
    }
    else if(v[m]>x){
      e=m-1;
    }
    m=s+((e-s)/2);
  }
  return e; 
}

int main(){
  vector<long long> v = {1,2,5,6,10,17, 20,100};
  long long n=v.size(),x=7;
  int arr[]={5 ,6, 8, 9, 6, 5, 5, 6};
  pair<int,int> ans = getFloorAndCeil(arr,8,7);
  
  cout << ans.first << " " << ans.second;
  //cout << findFloor(v,n,x);
}