#include<iostream>

using namespace std;
double rpow(int b,int e)
{
    double a=1.0;
    for(int i=1;i<=e;i++)
    {
       a*=b;
    }
    return a;
}
int main()
{
    int n,t,p=0,dec=0,b=0;
    cin>>n;
    while(n>0)
    {
        t=n%10;
        n/=10;
        dec+=t*(rpow(8,p));
        p++;

    }
    t=1;
    n=dec;
    while(n>0)
    {
        b+=(n%2)*t;
        t*=10;
        n/=2;

    }
    cout<<b;
    return 0;

}
