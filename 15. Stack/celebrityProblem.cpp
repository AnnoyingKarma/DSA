#include <iostream>
#include <vector>

using namespace std;

int celebrity(vector<vector<int>> &m){
  int n=m.size();
  int arr[n]={0};
  int i=0, j=n-1,ans=-1;

  if(n==1) return 0;
  
  while(i<j){
    if(m[i][j]==1) i++;
    else if(m[j][i]==1)j--;
    else{
      i++;
      j--;
    }
  }

  for(int k=0; k<n; k++){
    if(k==i) continue;
    if(m[k][i]!=1) return -1;
    if(m[i][k]==1) return -1;
  }

  return i;
}

int main(){
  vector<vector<int>> m={ {0, 1, 1, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0} };
  vector<vector<int>> mm={{1,1},{1,1}};
  vector<vector<int>> mmm={{1}};
  cout << celebrity(mmm);
}
