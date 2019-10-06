#include<iostream>
using namespace std;
int main()
{
    int n,temp=0,d=1;
    cin>>n;
    while(n>0)
    {
       temp+=(n%8)*d;
       d*=10;
       n/=8;

    }
    cout<<temp;
    return 0;
}
