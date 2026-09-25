#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n) {
  // code here return{repeating number,missing number}
  vector<int> ans(2,0);
  sort(arr.begin(),arr.end());
  int val=2;
  for(int i=1; i<n; i++){
    if(arr[i]==arr[i-1]){
      ans[0]=arr[i];
      ++i;
    }
    if(arr[i]!=val && ans[1]==0){
      ans[1]=val;
    }
    val++;
  }
  if(ans[1]==0)ans[1]=n;
  if(arr[0]==2)ans[1]=1;
  return ans;
}

int main(){
  vector<int> arr={1,2,3,3};
  int n = arr.size();
  vector<int> ans =findTwoElement(arr,n);
  cout << ans[0] << " " << ans[1] << "\n";
}