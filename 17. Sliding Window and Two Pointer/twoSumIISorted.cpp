#include <iostream> 
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target){
  int len = numbers.size();
  int l=0,r=len-1;  

  while(l<r){
    int sum=numbers[l]+numbers[r];
    if(sum==target) return { l+1,r+1};
    else if (sum<target) l++;
    else r--;
  }
  return {1,2};
}

int main(){
  vector<int> numbers = {2,3,4,11,15};
  int target = 14;
  vector<int> ans = twoSum(numbers, target);
  for(auto it:ans) cout << it << "  ";
}