#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findPages(vector<int> booksPages,int books,int students){

  if(books<students) return -1;

  long long minValue=booksPages[0],maxValue=0;
  for(int i=0; i<books; ++i){
    maxValue+=booksPages[i];
    minValue=max(minValue,booksPages[i]*1ll);
  }

  int ans=-1;

  while(minValue<=maxValue){
    
    int cnt=1;
    long long sum=0;
    long long mid=minValue+(maxValue-minValue)/2;

    for(int i=0; i<books; ++i){
      sum+=booksPages[i];
      if(sum>mid){
        ++cnt;
        sum=booksPages[i];
      }
    }

    if(cnt>students){
      minValue=mid+1;
    }
    else{
      ans=mid;
      maxValue=mid-1;
    }

  }
  return ans;

}

int main(){

  vector<int> booksPages={5, 10, 20, 30, 40};
  
  cout << findPages(booksPages,5,3);

}