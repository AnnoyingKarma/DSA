#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// too slow as it takes 0(n^2)time to run
// vector<int> jobSequencing(vector<int> &deadline, vector<int> & profit){

//   size_t len = profit.size();
//   int maxDeadline = 0;
//   for(size_t i=0; i<len; ++i){
//     maxDeadline=max(maxDeadline,deadline[i]);
//   }

//   ++maxDeadline;

//   vector<pair<int,int>> combined;

//   for(size_t i=0; i<len; ++i){
//     combined.push_back({profit[i],deadline[i]});
//   }

//   vector<int> vi(maxDeadline);

//   sort(combined.begin(),combined.end(), greater<pair<int,int>>());

//   int totalProfit=0;
//   int jobCount=0;

//   for(size_t i=0; i<len; ++i){
//     for(int j=combined[i].second-1; j>=0; --j){
//       if(vi[j]==0){
//         ++jobCount;
//         totalProfit+=combined[i].first;
//         vi[j]=1;
//         break;
//       }
//     }
//   }
//   return {jobCount,totalProfit};
// }

vector<int> jobSequencing(vector<int> &deadline, vector<int> & profit){

}

int main(){
  vector<int> deadline = {3,1,2,2};
  vector<int> profit = {50,10,20,30};
  vector<int> ans = jobSequencing(deadline,profit);
  for(int it:ans) cout << it << " ";
}