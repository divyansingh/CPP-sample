#include<iostream>
using namespace std;
void pallindrome(long a[],long n)
{
    long i,k=n/2;
    for(i=0;i<k;i++)
    {
        if(a[i]!=a[n-i-1])
            break;
    }
    if(i<k) cout<<"false";
    else    cout<<"true";
}
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)    cin>>a[i];
    pallindrome(a,n);
    return 0;
}
