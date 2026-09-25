#include <iostream>
using namespace std;


/*

// function for binary search
int bin (int arr[],int size,int key)
{
    int s=0, e=size-1;
    //int mid = (s+e)/2;
    // correct mid formula down here!!
    int mid = (s+(e-s)/2);
    while(s<=e)
    {
    if (arr[mid] == key)
    {
        return mid;
        break;
    }
    else if (arr[mid] > key)
    {
        e=mid-1;
    }
    else if (arr[mid] < key)
    {
        s=mid+1;
    }
    mid = (s+e)/2;
    }
    return -1;

}

// getting first occurence of digit in array
int firstocc(int arr[],int key,int n)
{
    int s=0,e=n-1, mid=s+(e-s)/2, ans =-1;
    while(s<=e)
    {
        if (arr[mid] == key)
        {
            ans=mid;
            e=mid -1;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }
        else if (key>arr[mid])
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}
// getting last occurence of digit in array
int lastocc(int arr[],int key,int n)
{
    int s=0,e=n-1, mid=s+(e-s)/2, ans =-1;
    while(s<=e)
    {
        if (arr[mid] == key)
        {
            ans=mid;
            s=mid +1;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }
        else if (key>arr[mid])
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}

// using linear search for total occurences;
int totalocclinear(int arr[], int key, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    return count;
}

// finding mountain peak
int mountainPeak(int arr[], int n)
{
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid+1] > arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int findTarget(int arr[],int target,int n)
{   int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<=e)
        {
            if(target==arr[mid])
            {
                return mid;
            }
            else if(target<arr[mid])
            {
                e=mid-1;
            }
            else if(target>arr[mid])
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return mid;
}
*/

int main ()
{
    /*

    int even[6] = {2,5,7,9,11,99};
    int odd[5] = {5,7,8,11,23};
    int s=0, e=5;
    int mid = (s+e)/2;
    
    int key= 5;
    
// using binary search to find a key
    while(s<=e)
    {
    if (even[mid] == key)
    {
        cout << "Index -> " << mid << endl;
        break;
    }
    else if (even[mid] > key)
    {
        e=mid-1;
    }
    else if (even[mid] < key)
    {
        s=mid+1;
    }
    mid = (s+e)/2;
    }

    // using function with binary search
    int checkans = bin(even,6,99);
    cout << "Index of Key is : "<< checkans << endl;
    checkans = bin(odd,6,7);
    cout << "Index of Key is : "<< checkans << endl;
    checkans = bin(odd,6,100);

// getting first & last occurence of digit in array 
    int arr[8] = {2,3,4,7,9,11,12,13};
    cout << "First occurence :  "<< firstocc(arr,12,8) << endl;
    cout << "Last occurence :  "<< lastocc(arr,12,8) << endl;
    return 0;

// getting total no. of occurences of a digit in an array
// using linear search

    int arr[10] = {1,5,6,5,8,9,5,5,5,1};
    cout << "Count of the key is  :  " << totalocclinear(arr, 6,10) << endl;


// total occ using binary search
    int arr[10] = {1,5,6,9,18,19,20,20,20,20};
    cout << "Total occurence of key is :  " << lastocc(arr, 25,10) - firstocc(arr, 25,10)  + 1 << endl;


// find the mountain peak
    int arr[4] = {3,4,5,1};
    cout << "Mountain peak is : " << mountainPeak(arr,4) << endl;

   int arr[4] = {1,3,5,6};
   cout << findTarget(arr,5,4);
    

// getting sq.rt without using math function;
   int x=49;
   int v=0;
   while(v*v != x)
   {
    v++;
   }
   cout << v;


    */

}