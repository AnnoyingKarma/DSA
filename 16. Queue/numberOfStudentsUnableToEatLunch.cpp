#include <iostream>
#include <queue>

using namespace std;

int countStudents(const vector<int>& students,const vector<int>&sandwiches){

  int cntOne=0,cntZero=0;
  
  for(int it:students) it?++cntOne:++cntZero;
  
  for(int it:sandwiches) {
    if(cntZero>0 && it==0) --cntZero;
    else if(cntOne>0 && it==1) --cntOne;
    else break;
  }
   return cntZero+cntOne;

}

int main(){
  cout << countStudents({1,1,0,0},{0,1,0,1});
}