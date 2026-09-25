#include <iostream>
using namespace std;

// print 4*4 pattern using *;
void pattern1(int n)
{    
    for (int i=0; i<n; i++)
    {
        for (int i=0; i<n; i++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}

void pattern2(int n)
{    
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}

void pattern3(int n)
{    
    for (int i=0; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << j;

        }
        cout << endl;
    }
}

void pattern4(int n)
{    
    for (int i=0; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << i;

        }
        cout << endl;
    }
}

void pattern5(int n)
{    
        for (int i=1; i<=n; i++)
    {
        for (int j=n; j>=i; j--)
        {
            cout << "* ";

        }
        cout << endl;
    }
}

void pattern6(int n)
{    
        for (int i=1; i<=n; i++)
    {
        for (int j=n,k=1; j>=i; j--,k++)
        {
            cout << k;

        }
        cout << endl;
    }
}

void pattern7(int n)
{    
        for (int i=1; i<=n; i++)
    {
        for (int j=n; j>i; j--)
        {
            cout << "- ";

        }
        for (int k=1; k<i*2; k++)
        {cout << "* " ;}
        for (int j=n; j>i; j--)
        {
            cout << "- ";

        }
        cout << endl;
    }
}

void pattern8(int n)
{    
        for (int i=1; i<=n; i++)
    {
        for (int j=0; j<i-1; j++)
        {
            cout << "-";

        }
        for (int k=(n*2+1); k>i*2; k--)
        {cout << "*" ;}
        for (int j=0; j<i-1; j++)
        {
            cout << "-";

        }
        cout << endl;
    }
}


int main ()
{
/*
pattern1(7);
pattern2(5);
pattern3(8);
pattern4(4);
pattern5(6);
pattern6(5);
pattern7(4);
*/
pattern8(5);
}