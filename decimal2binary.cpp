#include<iostream>
using namespace std;
int main()
{
    int n,t=1,b=0;
    cin>>n;
    while(n>0)
    {
        b+=(n%2)*t;
        t*=10;
        n/=2;

    }
    cout<<b;
    return 0;
}
