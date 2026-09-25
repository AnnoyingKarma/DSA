#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int arr[]={6,5,1,4,8,10,12,200,12,43,23,12}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}