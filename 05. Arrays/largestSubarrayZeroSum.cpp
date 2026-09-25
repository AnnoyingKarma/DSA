#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*
// brute force
int maxLen(vector<int>&A, int n)
{   
    // Your code here
    int maxLen=0;
   for(int i=0; i<n-1; i++){
        long long sum=0;
        int cnt=1;
        sum+=A[i];
        for (int j=i+1; j<n; j++){
            sum+=A[j];
            cnt++;
            if(sum==0) maxLen=max(maxLen,cnt);
            else if(sum>0) break;
        }
    }
    return maxLen;
}
*/

// optimized
int maxLen(vector<int>&A, int n){
  map<int,int> store;
  int len=0,maxxed=0;
  long long sum=0;
  for(int i=0; i<n; i++){
    sum+=A[i];
    if(sum==0) len=i+1;
    else if(store.find(sum) != store.end()){
      len=i-store.find(sum)->second;
    }
    else{
      store[sum]=i;
    }
    maxxed=max(maxxed,len);
  }
  return maxxed;
}

int main(){
    vector<int> A={1,1,2,2,-2,1,1,1};
    int n=A.size();
    cout << maxLen(A,n) << "\n";

}