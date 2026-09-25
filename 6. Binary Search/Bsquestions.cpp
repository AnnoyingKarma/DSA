#include <iostream>
using namespace std;

/*

int leftSum(int arr[], int n)
{
    int s=0,e=n-1,mid=s+(e-s)/2;
    int leftsum=0;
    for(int i=0; i<mid; i++)
    {
        leftsum=leftsum+arr[i];
    }
    return leftsum;
}
int rightSum(int arr[], int n)
{
    int s=0,e=n-1,mid=s+(e-s)/2;
    int rightsum=0;
    for(int i=mid+1; i<=e; i++)
    {
        rightsum=rightsum+arr[i];
    }
    return rightsum;
}


int getPivot(int arr[], int n)
{

    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0]) 
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
*/

int main ()
{

/*
    int arr[5] = {1,7,3,1,7};
    cout << leftSum(arr,5) << endl;
    cout << rightSum(arr,5) << endl;
// find smallest digit in array
    int arr[5] = { 11,12,3,8,10};
    cout << getPivot(arr, 5) << endl; // returning array index



// getting approx square root of numbers by me using Binary search
    int n;
    cin>>n;
    int s=1,e=n,m=s+(e-s)/2;
    while(s<e)
    {
        if(m*m==n)
        {
            cout << m << endl;
            break;
        }
        else if(m*m<n)
        {
            s=m+1;
        }
        else {e=m-1;}
        m=s+(e-s)/2;
    }

    if(e<=m)
    cout << e << endl;

*/

    double n;
    cin>>n;
    double s=1,e=n,m=s+(e-s)/2,ans;
    while(s<e)
    {
        if(m*m==n)
        {
            break;
        }
        if(m*m<n)
        {   
            ans=m;
            s=m+1;
        }
        else {e=m-1;}
        m=s+(e-s)/2;
    }

    cout << ans;

}