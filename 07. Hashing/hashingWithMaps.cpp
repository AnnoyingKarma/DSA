// we can use maps for hashing. map or unordered map
// every key is unique 
// map is sorted and unordered map is in any order 

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    map<int, long long> m;
    unordered_map<int,int> um;

    int arr[]={1,1,2,3,2,2,1,4,5,67,7,8,4,1,2,1,1,2,5,34,2,5,5,6,7,8};
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        m[arr[i]]++;
        um[arr[i]]++;
    }
    cout << "Map \n";
    for(auto it:m) cout << it.first << " -> " << it.second << "\n";
    cout << "\nUnordered Map \n";
    for(auto it:um) cout << it.first << " -> " << it.second << "\n";
}