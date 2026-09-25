#include <iostream>
#include <vector>

using namespace std;

int bruteForceFindKthPositive(vector<int>& arr, int k) {
int n=arr.size(),cnt=0;
if(k<arr[0]){
return k;
}
for(int i=0; i<n; ++i){
  cnt=arr[i]-(i+1);
  if(cnt>=k){
  if(i==0)break;
  int val = k-(arr[i-1]-i);
  return arr[i-1]+val;
  }
}
int temp=(k-cnt);
return arr[n-1]+temp;
}


int findKthPositive(vector<int>& arr, int k) {
  int n=arr.size();
  if(k<arr[n-1]&&n==1) return k;
  else if ((n+k)>arr[n-1]){
    return {arr[n-1]+(k-(arr[n-1]-n))};
  }

  int s=0,e=n-1;
  int ans=-1;
  while(s<=e){
    int m=s+((e-s)/2);
    int temp=(arr[m]-(m+1));
    if(temp>=k){
      ans=arr[m]-(temp-k+1); 
      e=m-1; 
    }
    else s=m+1;
  }
  return ans;
}

int main(){
  vector<int> arr={5};
  cout << findKthPositive(arr, 10);
}