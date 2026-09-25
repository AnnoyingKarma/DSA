#include<iostream>
using namespace std;



void prime(int n)
{
    int i,m=0,a=0;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime"<<endl;
            a=1;
            break;
        }
    }
    if(a==0)
        cout<<"Prime"<<endl;
}



int main()
{
    int n;
    cin>>n;
    prime(n);
}
