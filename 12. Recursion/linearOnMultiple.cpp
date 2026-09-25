#include <iostream>
#include <vector>

std::vector<int> linearMulti(const std::vector<int> arr,std::vector<int> &ans,const int target,int i=0){
  if(i>=arr.size())return ans;
  if(arr[i]==target)ans.push_back(i);
  return linearMulti(arr,ans,target,i+1);
}

int main(){
  std::vector<int> arr= {1,2,3,5,1,2,4,1,4,121,2,1,1,324,2,2,1,1};
  std::vector<int> ans;
  linearMulti(arr,ans,1);
  for(auto x:ans){
    std::cout << x << " ";
  }
  std::cout << "\n";
}