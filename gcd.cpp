#include<iostream>
using namespace std;
long gcd(long a,long b)
{
    long r;
    while(true)
    {
        r=a%b;
        if(r==0)    break;
        else
        a=b;
        b=r;
    }
    return b;
}
int main()
{
    long n1,n2;
    cin>>n1>>n2;
    long g=gcd(n1,n2);
    cout<<g;
	return 0;
}
