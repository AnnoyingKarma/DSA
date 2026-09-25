#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    set<vector<int>> sv;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    if((nums[i]+nums[j]+nums[k]+nums[l])==target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        sv.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(sv.begin(),sv.end());
    return ans;
}

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> ans = fourSum(nums,target);
    for(auto i : ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout << "\n";
    }
}