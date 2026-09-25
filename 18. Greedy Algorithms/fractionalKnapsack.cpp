#include <iostream>
#include <vector>
#include <map>

using namespace std;

double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity){

  size_t len =val.size();
  multimap<double,int> realValue;
  int capacityAvailable = capacity;
  double storeValue=0;

  for(size_t i=0; i<len; ++i){
    double temp = (double)val[i]/wt[i];
    realValue.insert({temp,i});
  }  

  for(auto it=realValue.rbegin(); it!=realValue.rend(); ++it){
    int index=it->second;
    if(wt[index]<=capacityAvailable){
      capacityAvailable-=wt[index];
      storeValue+=val[index];
    }
    else if(capacityAvailable>0){
      double dividedValue=it->first;
      storeValue+=dividedValue*capacityAvailable;
      break;
    }
    else break;
  }

  return storeValue;
}

int main(){
  vector<int> val={50};
  vector<int> wt={30};
  int capacity=10;
  cout << fractionalKnapsack(val,wt,capacity);
}