#include <iostream>
#include <set>
#include <vector>
#include <algorithm>


using namespace std;


vector<vector<int>> sumOfThree(vector<int> &arr, int n){
	set<vector<int>> sol;
	for(int i=0; i<n; i++){
	set<int> store;
		for(int j=i+1; j<n; j++){
				int val=-(arr[i]+arr[j]);
				if(store.find(val) != store.end()){
					vector<int> temp={arr[i],arr[j],val};
					sort(temp.begin(),temp.end());
					sol.insert(temp);
				}
				store.insert(arr[j]);
		}
	}	
	vector<vector<int>> ans(sol.begin(),sol.end());
	return ans;
}


int main(){
	
	int n=5;
	vector<int> arr = {-1,-1,2,0,1};
	vector<vector<int>> ans=sumOfThree(arr,n);	
	for(auto i:ans){
		for(auto j:i){
			cout << j << " ";
		}
		cout << "\n";
	}
}
