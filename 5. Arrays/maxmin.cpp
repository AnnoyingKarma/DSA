#include <iostream>
using namespace std;


/*
// Getting the maximum value
int getMax(int ary[], int size)
{
    int max = INT_MIN;

    for (int i=0; i<size; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    return max;
}

// Getting the minimum value
int getMin(int ary[], int size)
{
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(ary[i] < min)
        {
            min = ary[i];
        }
    }
    return min;
}
*/

int main()
{
/*

    int n;
    cin >> n;
    int num[100];

    for (int i = 0; i<n; i++)
    {
        cin >> num[i];
    }
    cout << endl << "Maximum value is :  " << getMax(num, n) << endl << endl;
    cout << endl << "Minimum value is :  " << getMin(num, n) << endl << endl;
    


// without using function to get the max and minimum value in the array ..

int n;
cin >> n;
int num [100];
int min = INT_MAX;

for (int i=0; i<n; i++)
{
    cin >> num[i];
}

for (int i=0; i<n; i++)
{
    if (num[i]<min)
    {
        min = num[i];
    }
}

cout << min << endl;



// how to use max and min function>>
    cout << max (4, 5) << endl;
    int mini = 3;
    mini = min (mini, 5);
    cout << mini << endl;

*/

// getting the value with max function and min function;
    int n;
    cin >> n;
    int ary[100];
    int mini = INT_MAX;

    for (int i=0; i<n; i++)
    {
        cin >> ary[i];
    }

    for (int i=0; i<n; i++)
    {
        mini = min(mini, ary[i]);
    }

    cout << mini << "\n";
}