#include <iostream>
using namespace std;


/*
// reversing an array with function by me ::
void revary(int arry[], int inp, int last,int keep)
{
    for (int i=0; i<inp; i++)
    {
        cin >> arry[i];
    }

    for (int i=0; i<inp/2; i++)
    {
        keep = arry[i];
        arry[i] = arry[last];
        arry[last] = keep;
        last = last-1;
    }
    for (int i = 0; i<inp; i++)
    {
        cout << arry[i] << endl;
    }
    
}

// done with video using swap function
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

*/

int main ()
{
/*

    // reversing an array by me;
    int store, s = 3;
    int arry[4] = {3, 4, 6, 7};
    for (int i = 0; i<2; i++)
    {
        store = arry[i];
        arry[i] = arry[s];
        arry[s] = store;
        s = s-1;
    }
    for (int i = 0; i<4; i++)
    {
        cout << arry[i] << endl;
    }


// Done by me (reversing an array )
    int ary[100];
    int n, store;
    cin >> n;
    int last = n-1;
    for (int i=0; i<n; i++)
    {
        cin >> ary[i];
    }

    for (int i=0; i<n/2; i++)
    {
        store = ary[i];
        ary[i] = ary[last];
        ary[last] = store;
        last = last-1;
    }
    for (int i = 0; i<n; i++)
    {
        cout << ary[i] << endl;
    }



// function (reversing an array) by me

    int ary[100];
    int n, store;
    cin >> n;
    int last = n-1;

    revary(ary, n, last, store);
    

//done from video by using swap func
    int arr[6] = {1,3,0,5,-2,12};
    int brr[5] = {1,2,0,5,-22};
    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;

*/
}