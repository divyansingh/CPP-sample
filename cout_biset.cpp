#include<iostream>
using namespace std;
int main()
{
    //bitset is number of 1 in its binary equivalentm or number of bits stored
    int n,sum=0,t=1,b=0;
    cin>>n;
    int k=n;
    while(n>0)
    {
        sum +=n%2;
        n /=2;

    }
    cout<<sum<<endl;
    n=k;
    while(n>0)
    {
        b+=(n%2)*t;
        t*=10;
        n/=2;

    }
    cout<<b;
    return 0;
}
