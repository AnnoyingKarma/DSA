#include <iostream>
using namespace std;

/*
// function to reverse alternate array
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {cout << arr[i] << " ";}
    cout << endl;
}


void swapAlt(int arr[], int size)
    {
        for (int i=0; i<size; i+=2)
        {
            if(i+1 < size)
            {swap(arr[i], arr[i+1]);}
        }
    }

*/

int main ()
{
    // alternate the array // swapping array with its alternate // i/p = [1,2,3,4] o/p = [2,1,4,3]
/*

    int n, store;
    cin>>n;
    int swal[100];

    for (int i=0; i<n; i++)
    {
        cin >> swal[i];
    }

    // // not using swap function
    // for(int i = 0; i<=n-2; i+=2)
    // {
    //     store = swal[i];
    //     swal[i] = swal[i+1];
    //     swal[i+1] = store;
    // }

    // using swap function here 
    for(int i = 0; i<=n-2; i=i+2)
    {
        swap(swal[i],swal[i+1]);
    }

    for (int i=0; i<n; i++)
    {
        cout << swal[i] << " ";
    }


// reverse alternate array
int even[8] = {3,4,5,2,1,6,7,0};
int odd[5] = {21,123,21,65,877};

swapAlt(even, 8);
printArray (even, 8);

cout << endl;

swapAlt(odd, 5);
printArray (odd, 5);

// finding unique number in array using XOR!!
int n, ans=0;
cin >> n;
int ary[100];
for (int i=0; i<n; i++)
{
    cin>> ary[i];
}
for (int i=0; i<n; i++)
{
    ans=ans^ary[i];
}
cout << ans << endl;


// finding a dublicate from 1 to n-1 ??? online question;

int ary[5] = {2,3,1,3,4};
int ans = 0;

for (int i = 0; i<5; i++)
{
    ans= ans ^ ary[i];
}
for (int i=1; i<5; i++)
{
    ans = ans ^ i;
}
cout << ans;
*/

// find multiple duplicates in an array!!

/*
int arr[5] = {1,5,7,7,5};
int out[20];
for (int i=0; i<5; i++)
{
    for (int j=i+1; j<5; j++)
    {
        if(arr[i] == arr[j])
        {
            int a=0;
            out[a]=arr[i];
            cout << arr[i] << " is a dublicate element\n";
            cout << out[a] << endl;
            a++;
        }
    }
}


// check the intersection in array which value of array matches the other array value,, [1,2,3,4] [3,4,6,7] in these both array 3,4 are common that the output
int ary[10]= {4,5,7,9,-1,-1,44,77,66,90};
int arr[7]= {1,4,7,90,44,0,-1};

for (int i=0; i<10; i++)
{
    for (int j=0; j<7; j++)
    {
        if (ary[i] < arr[j])
        break;
        if (ary[i] == arr[j])
        {
            cout << ary[i] << endl;
            arr[j] = INT_MIN; // you can use int min or any value that it can't expect
            break; 
        }
    }
}

// same above question but with while loop ans also its in ascending order

int ary[10]= {2,7,9,13,19,23,29,31,37,43};
int arr[7]= {7,12,14,19,23,31,43};
int i=0,j=0;

while(i<10 && j<7)
{
    if(ary[i]==arr[j])
    {
        cout << ary[i] << endl;
        i++,j++;
    }
    else if(ary[i]<arr[j])
    {i++;}
    else{j++;}
}

// check how you can make s form the given array by adding two array elements

int s=5;
int arr[5]={1,2,3,4,5};

for(int i=0; i<5; i++)
{
    for (int j=i+1; j<5; j++)
    {
        if(arr[i] + arr[j] == s)
        {
            cout << min(arr[i],arr[j]) << " " << max(arr[i],arr[j]) << endl;
        }
    }
}

// finding key by adding triplets 1+2+3=6;
int key = 10;
int arr[6] = {5,4,1,3,2,6};

for (int i = 0; i<5; i++)
{
    for (int j=i+1; j<5; j++)
    {
        for (int k=j+1; k<5; k++)
        {
            if(arr[i] + arr[j] + arr[k] == key)
            {
                cout << arr[i] << " + " << arr[j] << " + " << arr[k] << "  =  " << key << endl;

            }
        }
    }
}

// sorting the array

int arr[8] = {1,0,0,0,1,0,1,0};
int i =0, j=7;
while (i<j)
{
    while(arr[i] == 0 && i<j)
    {i++;}
    while(arr[j] == 1 && i<j)
    {j--;}
    if(arr[i] != arr[j] && i<j)
    {swap(arr[i], arr[j]);
    i++,j--;}

}
for (int i=0; i<8; i++)
{cout << arr[i] << " ";}

*/
}