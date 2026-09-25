#include <iostream>
#include <vector>
using namespace std;

void dutchNationalFlag(vector<int> &v){
    int lowPointer=0,midPointer=0,highPointer=v.size()-1;
    while(midPointer<=highPointer){
        if(v[midPointer] == 0){
            swap(v[midPointer],v[lowPointer]);
            midPointer++,lowPointer++;   
        }
        else if(v[midPointer] == 1){
            midPointer++;
        }
        else if(v[midPointer] == 2){
            swap(v[midPointer],v[highPointer]);
            highPointer--;
        }
    }
    cout << lowPointer << " " << midPointer << " " << highPointer << "\n";

    for( int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){
    vector<int> v={2,1,0,2,1,0,1,2,0,1,2,2,1,0};
    dutchNationalFlag(v);
}