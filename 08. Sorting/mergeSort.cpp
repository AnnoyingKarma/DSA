#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v,int start,int mid,int end){
    vector<int> temp;
    int left=start;
    int right=mid+1;

    while(left<=mid && right<=end){
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right<=end){
        temp.push_back(v[right]);
        right++;
    }
    for(int i=start; i<=end; i++){
        v[i]=temp[i-start];
    }
}

void mergeSort(vector<int> &v, int start, int end){
    if(start>=end)return;
    int mid=(start+end)/2;
    mergeSort(v,start,mid);
    mergeSort(v,mid+1,end);
    merge(v,start,mid,end);
}

int main(){
    vector<int> v={5,2,1,65,7,2,2,1};
    int n=v.size();
    for(int i=0; i<n; i++) cout << v[i] << " ";
    cout << "\n";
    mergeSort(v, 0, n-1);
    for(int i=0; i<n; i++) cout << v[i] << " ";
}