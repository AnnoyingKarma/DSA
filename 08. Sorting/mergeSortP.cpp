#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &que,int low,int mid,int high){
  vector<int> temp;

  int first = low;
  int second = mid+1;

  while(first<=mid && second<=high){
    if(que[first]<que[second]){
      temp.push_back(que[first]);
      first++;
    }
    else{
      temp.push_back(que[second]);
      second++;
    }
  }
  while(first<=mid){
    temp.push_back(que[first]);
    first++;
  }
  while(second<=high){
    temp.push_back(que[second]);
    second++;
  }

  for(int i=low; i<=high; ++i){
    que[i]=temp[i-low];
  }

}

void mergeSort(vector<int> &que,int low,int high){
  if(low<high){
    int mid= (low+high)/2;
    mergeSort(que,low,mid);
    mergeSort(que,mid+1,high);
    merge(que,low,mid,high);
  }
}

int main(){
  vector<int> que={7,8,4,3,10,9,1};
  int n= que.size();
  mergeSort(que,0,n-1);

  for(auto i:que){
    cout << i << " ";
  }
}