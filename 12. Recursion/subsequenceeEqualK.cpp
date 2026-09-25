#include <iostream>
#include <vector>
using namespace std;

int subSeqEqualK(int i, int cnt, int sum, int n, int k, vector<int>arr){
  if(i>=n){
    return (sum==k)? cnt+1:cnt;
  }

  cnt=subSeqEqualK(i+1,cnt,sum+arr[i],n,k,arr);
  cnt=subSeqEqualK(i+1,cnt,sum,n,k,arr);
  return cnt;
}

int main(){
  vector<int> arr={1,2,1};
  vector<int> emp;
  cout << subSeqEqualK(0,0,0,arr.size(),2,arr);
}