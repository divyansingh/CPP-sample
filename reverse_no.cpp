#include<iostream>
using namespace std;
int main()
{
    long n,r=0,d;
    cin>>n;
    while(n>0)
    {

        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    cout<<r;
}
