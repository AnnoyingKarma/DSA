#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(const vector <int> arr,const int target,int i=0){
  if(i>=arr.size())return false;
  if(arr[i]==target){
    return true;
  }
  return linearSearch(arr,target,i+1);
}

int main(){
  vector<int> arr={2,2,3,4,5,3,1,12,52,1};
  cout << linearSearch(arr,52);
}