#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool desc (int a,int b){
  return a>b;
}

bool biggerThanHundred(int a,int b){
  return (a<100) && (b>=100);
} 

int main(){
  vector<int> value={10,60,101,120, 1 ,2 , 100, 200 , 300, 10, 50}, weight={10,20,30};

  for(int it:value) cout << it << " ";
  cout << "\n";

  sort(value.begin(),value.end(),greater<int>());// used greater<int>() to sort in descending order
  for(int it:value) cout << it << " ";
  cout << "\n";

  sort(value.begin(),value.end(),less<int>()); // used less<int>() to sort in asceding order
  for(int it:value) cout << it << " ";
  cout << "\n";

  sort(value.begin(),value.end(),biggerThanHundred); // using custom comparator
  for(int it:value) cout << it << " ";
  cout << "\n";


}