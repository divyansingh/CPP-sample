
#include<iostream>
using namespace std;
int main()
{
    long n,n1,d=0;
    cin>>n>>n1;
    while(n>0)
    {

        if(n%10==n1)    d++;

        n=n/10;
    }
    cout<<d;
}
