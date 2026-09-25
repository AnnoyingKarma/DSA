#include <iostream>
using namespace std;

/*

// making function to get power of numbers
int power()
{

    int a, b, ans=1;
    cout << endl << "Provide a value : ";
    cin >> a;
    cout << endl << "Provide a power to value : ";
    cin >> b;

    for (int i = 1; i<=b; i++)
    {
        ans = ans*a;
    }
    return ans;
}



// return 1 for odd ;
// return 0 for even;
bool isEven(int a)
{
    if (a&1)
    {
        return 0;
    }
    return 1;

}


// func to get factorial of number
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// func to get nCr value
int nCr (int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    return numerator/denominator;


}

// printing counting till n 
void counting(int a)
{

int i = 1;
while (i<=a)
{
    cout << i << endl;
    i++;
}

}

// check if numbe is prime or not
// 1 >> prime number 
// 0 >> Not a prime number
bool isPrime (int n)
{

    for (int i = 2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;

}
// ap question n value will be provided return ap
int arpr(int a)
{
int ap = ((3 * a) + 7);
return ap;
}

// check how many 1's are in a&b digit both combined


int oneInAB(int a, int b)
{
int i=0;
while (a!=0)
{
    if (a&1){i++;}
    a = a >> 1;
}
while (b!=0)
{
    if (b&1){i++;}
    b = b >> 1;
}
    return i;
}

// fibonacci series n'th term
int fiboNnum(int n)
{
int a =0, b=1;

for (int i =1; i<=n-1; i++)
{
    int c = (a+b);
    a=b;
    b=c;
}
return a;

}
*/



int main ()
{
/*
int answer = power();
cout << endl << "Answer is : " << answer;

//check if its even or odd no. 
int num;
cin >> num;
if (isEven(num))
{
    cout << "Number is even" << endl;
}
else
{cout << "Number is odd" << endl;}

// get the nCr value answer
int n, r;
cin >> n >> r;

cout << "Answer is " << nCr(n, r) << endl;

// printing void statement
int n; 
cin >> n;
counting(n);

// check if its prime or not
int n;
cin>>n;
cout << isPrime(n) << endl;

// get the value of ap
int n;
cin >> n;
cout << arpr(n) << endl;

// total number of setbits in a&b

int a,b;
cin >> a >> b;
cout << oneInAB(a, b) << endl;

// fibonacci series n'th number 
int a =0, b=1, n;
cin >> n;
cout << fiboNnum(n) << endl;

*/



}
