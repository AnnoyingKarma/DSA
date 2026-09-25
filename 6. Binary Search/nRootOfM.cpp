#include <iostream>
using namespace std;


int NthRoot(int n, int m)
{
  // Code here.
  
  int s=1,e=m;
  int mid=m;
  while(s<=e){
    long long sum=1;
    for(int i=0; i<n; ++i){
      sum*=mid;
      if(sum>m){
        break;
      }
    }
    if(sum==m){
      return mid; 
    }
    else if(sum<m){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+((e-s)/2);
  }
  return -1;
}

int main(){
  cout << NthRoot(10,1024);
}