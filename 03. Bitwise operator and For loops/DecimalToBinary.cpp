#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
/*

// decimal to binary ___ done by me 


int n;
cin >> n;
int digit = 0;
int ans = 0, i = 0;


while(n!=0)
{
    digit = n%2;
    n= n/2;
    ans = (digit * pow(10, i) + ans);
    i++;
}
cout << ans << endl;


// decimal to binary 
// second way to do this


int n;
cin >> n;

int ans = 0, i = 0;

while(n!=0)
{
    int bit = n&1;
    
    ans = (bit * pow(10, i) + ans);

    n= n>>1;
    i++;
}
cout << ans << endl;


// binary to decimal


int n;
cin >> n;

int i =0, ans = 0;
 while (n !=0)
 {
    int digit =n%10;
    if (digit == 1)
    {
        ans = ans + pow(2, i);
    }

    n = n/10;
    i++;

 }
 cout << ans << endl;

*/

// H.W. get binary of negative no.______ negative to binary no.


// Binary to decimal by me


int n;
cin >> n;
int ans = 0, i = 0;

while (n!=0)
{
    int digit = n%10;
    n = n/10;
    if (digit == 1)
    {
        ans = ans + pow(2, i);
    }
    i++;
}
    cout << ans << endl;  

}