#include <iostream>
#include <vector>
using namespace std;

int pivoter(vector<int> &v, int start, int end){
    int p=v[start];
    int left=start;
    int right=end;
    while(left<right){
        while(v[left]<=p && left<=end-1)left++;
        while(v[right]>p && right>=start+1)right--;
        if(left<right)swap(v[left],v[right]);
    }
    swap(v[right],v[start]);
    return left;
}

void quickSort(vector<int> &v, int start, int end){
    if(start<end){
        int pivot = pivoter(v,start,end);
        quickSort(v,start,pivot-1);
        quickSort(v,pivot+1,end);
    }
}

int main(){
    int n=10;
    vector<int> v={7,10,5,8,2,1,4,5,6,100};
    quickSort(v,0,n-1);
    for(int i=0; i<10; i++)cout << " " << v[i]; 
}