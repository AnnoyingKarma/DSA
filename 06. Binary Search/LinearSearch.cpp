#include <iostream>
using namespace std;

int main ()
{

    int even[6] = {2,5,7,9,11,99};

    int key1= 99;

    for (int i=0; i<6; i++)
    {
        if (even[i]==key1)
        {cout << " Index where key is present -> " << i << endl;}
    }
}