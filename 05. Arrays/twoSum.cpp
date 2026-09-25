#include <iostream>
#include <map>
#include <vector>
using namespace std;

void twoSum(vector<int> &v, int k){
    map<int,int> sumOfTwo;
    pair<int,int> indexOfTwoSum;
    for(int i=0; i<v.size(); i++){
        int searchingValue = k-v[i];
        if(sumOfTwo.find(searchingValue) != sumOfTwo.end()){
            indexOfTwoSum.first = sumOfTwo[searchingValue];
            indexOfTwoSum.second = i;
        }
        sumOfTwo[v[i]]=i;
    }
    cout << indexOfTwoSum.first << " " << indexOfTwoSum.second;
}

int main(){
    vector<int> v={13,3,7,6,7,3,5,8,10};        
    int k=16;
    twoSum(v,k);
}