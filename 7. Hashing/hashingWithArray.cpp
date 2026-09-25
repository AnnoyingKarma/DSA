// can do pre computing and store the frequency of that value
// how many times 1 occur can be stores in array[1] and same for all values like 
// how many times 10 occur will be stored in array[10]
#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,1,1,3,3,5,5,5,5,5};
    int freq[11]={0}; 
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        freq[arr[i]]++;
    }
    for(int i=1; i<11; i++) cout << i << " -> " << freq[i] << "\n";
}