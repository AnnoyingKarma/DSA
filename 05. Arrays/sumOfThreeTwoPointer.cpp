#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
  int i=0,j=1,k=n-1;
  sort(arr.begin(),arr.end());
    for(; i<n; i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        j=i+1;
        k=n-1;
      while(j<k){
        int val=arr[i]+arr[j]+arr[k];
        if(val<0){
          j++;
        }
        else if(val>0){
          k--;
        }
        else{
            vector<int> temp={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
          j++;
          k--;
            while(j<k && arr[j]==arr[j-1])j++;
            while(j<k && arr[k]==arr[k+1])k--;
        }
      }
    }
    return ans;
}

int main(){
    int n=6;
    vector<int> arr={-1,0,1,2,-1,-4};
    vector<vector<int>> ans = triplet(n,arr);

    for(auto i:ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout << "\n";
    } 
}