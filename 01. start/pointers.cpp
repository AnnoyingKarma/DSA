#include <iostream>
using namespace std;


// using pointer in functions
void increment (int *x)
{
    *x = *x + 2;
}


int main ()
{
    int x = 4;
    int *p_x = &x;
    cout << "Address of x: " << &x << endl;
    cout << "Value of p_x:  " << p_x << endl;  
    cout << "Value of *p_x:  " << *p_x << endl;  
    *p_x = 5;
    cout << "Value of *p_x:  " << *p_x << endl;  
    cout << "Value of x:  " << x << endl;  
    cout << "p_x + 1 : " << p_x + 1 << endl;

    // double pointer
    int **p_p_x = &p_x;
    cout << "Addr p_x: " << &p_x << endl;
    cout << "Value of p_p_x: " << p_p_x << endl;
    cout << "Value of *p_p_x: " << *p_p_x << endl; // will print value of x
    cout << "Value of **p_p_x: " << **p_p_x << endl;
    **p_p_x = 7; // changed the value of x
    cout << "x : " << x << endl;

    // array 

    int a[10];
    a[0]=2;
    a[1]=4;
    cout << "a : " << a << endl;
    cout << "&a[0] : " << &a[0] << endl;
    cout << "*a: " << *a << endl;
    cout << "a+1 : " << a+1 << endl;
    cout << "&a[1] : " << &a[1] << endl;
    cout << "*(a+1) : " << *(a+1) << endl;



}
