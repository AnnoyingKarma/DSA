#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

//Brute force is used

std::vector<std::vector<int>> result(int n,std::vector<int> &arr){
	std::set<std::vector<int>> ans;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				for(int k=j+1; k<n; k++){
					if((arr[i]+arr[j]+arr[k])==0){
						std::vector<int>temp={arr[i],arr[j],arr[k]};
						
						sort(temp.begin(),temp.end());
						ans.insert(temp);
					}
				}
			}
		}

		std::vector<std::vector<int>> sol(ans.begin(),ans.end());
		return sol;
}

int main(){
	
	int n=5;
	std::vector<int>arr = {-1,-1,2,0,1};
	std::vector<std::vector<int>> ans=result(n,arr);
	for(auto i:ans){
		for(auto j:i){
			std::cout << j << " ";
		}
		std::cout << "\n";
	}

	return 0;

}
