#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello world " << endl;
}

int sum(int a, int b)
{
    int result = a+b;
    return result;
}

int digit_sum(int n)
{
    int digit_sum =0;
    while(n){
        digit_sum = digit_sum + n % 10;
        n=n/10;
    }
    return digit_sum;
}

void increment(int &z)
{
    z++;
    cout << z << "\n";
}

void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << "  " << y << "\n";
}

int main () 
{
    int a,b;
    cin>>a >> b;
    cout << digit_sum(a) + digit_sum(b);
    cout << "\n";

    int z;
    cin >> z;
    increment(z);
    cout << z;

    int x,y;
    cin>>x>>y;
    swap(x,y);
}


// array passes by as reference 