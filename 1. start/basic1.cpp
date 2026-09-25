#include <bits/stdc++.h>
using namespace std;

int main ()
{

    double a = 3/2; // 1
    cout << a << "\n";

    double c = 3/2.0; //1.5
    cout << c << "\n";

    int b = 3/2.0; //1
    cout << b << "\n";

    //int = -10^9 to 10^9
    //long = -10^12 to 10^12
    // long long = -10^18 to 10^18

    int aa =100000;
    int bb = 100000;
    int cc = aa*bb;
    cout << cc << "\n"; // overflow
    int mx=INT_MAX;
    cout << mx+1 << "\n"; // will start over again from negative side

    long long int ccc= aa*bb;
    cout << ccc << "\n"; // it will over flow even tho you stored aa*bb in  long int but the calclulation will be done b/w int so it will multiply first and then store the overflowed value in long

    // the way to avoid overflowing is adding 1ll;
    long long cccc=aa* 1LL *bb;
    cout << cccc << "\n";

    // double has more range but it costs precision

    double d=100000;
    double e=d*d;
    cout << e << "\n";// output will be (1e+10) it will show in scientific notataion
    //to avoid scientic notation use fixed 
    cout << fixed << e << "\n";

    
    cout << fixed << trunc(e) << "\n";

// find l*b length *breadth of a rectangle 
// find area 
// l*b that's it cout << l*b;

// 0 False 
// 1 True

//condition ? result_if_true : result_if_false


// jump statements 
// break;
// continue;
}