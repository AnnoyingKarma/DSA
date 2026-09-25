// we can also put a bool if the array gets sorted we shouldn't be running it for n times  

#include <iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
void bubbbleSort(int arr[],int n)
{
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped=true;
                }
        }
        if(swapped==false) break;
    }       
    print(arr,n);
}
int main()
{
    int arr[]={1,3,6,5,4,8,10,12,200,12,43,23,12}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbbleSort(arr,n);
    return 0;
}