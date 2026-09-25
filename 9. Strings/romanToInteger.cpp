#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {

  unordered_map<char,int> umap={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

  int n=s.size();
  long long cnt=0;
  cnt+=umap[s[n-1]];
  for(int i=n-2; i>=0; --i){
    if(umap[s[i]]<umap[s[i+1]]){
      cnt-=umap[s[i]];
    }
    else cnt+=umap[s[i]];
  }
  return cnt;
}


int main(){
  cout << romanToInt("MCMXCIV");
}