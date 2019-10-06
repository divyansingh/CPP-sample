#include<iostream>
using namespace std;
long lcm(long a,long b)
{
    long r,l=a*b;
    while(true)
    {
        r=a%b;
        if(r==0)    break;
        else
        a=b;
        b=r;
    }

    return l/b;
}
int main()
{
    long n1,n2;
    cin>>n1>>n2;
    long g=lcm(n1,n2);
    cout<<g;
	return 0;
}

