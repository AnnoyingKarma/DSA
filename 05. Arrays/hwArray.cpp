#include <iostream>
using namespace std;


int main ()

// done by me ::
{
    int n, sum = 0;
    cin >> n;
    int ary[100];
    
    for (int i = 0; i<n; i++)
    {
        cin >> ary[i];
        sum = (ary[i] + sum);
    }
    cout << sum << endl;

}