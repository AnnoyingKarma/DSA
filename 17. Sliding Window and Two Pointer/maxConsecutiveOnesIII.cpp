#include <iostream>
#include <vector>

using namespace std;


int longestOnes(vector<int>& nums, int k){
  int len = nums.size();
  int kcopy=k,lp = 0;
  int ans=0;
  for(int rp=0; rp<len; rp++){

    if(nums[rp]==0){
      if(kcopy>0){
        kcopy--;
      } 
      else{
        while(lp<=rp && nums[lp]==1){
          lp++;
        }
        lp++;
      }
    }
    if(ans<rp-lp+1) ans=rp-lp+1;

  }
  return ans;
}

int main(){
  vector<int> data={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
  int k=3;
  int ans = longestOnes(data,k);
  cout << ans;
}