#include<iostream>
using namespace std;
void checkmirror(long a[],long b[],long n)
{
    long i,k=n/2,j=n-1;
    for(i=0;i<k;i++,j--)
    {
        if(b[j]!=a[i])
            break;
    }
    if(i<k) cout<<"false";
    else    cout<<"true";
}
int main()
{
    long n;
    cin>>n;
    long a[n],b[n];
    for(long i=0;i<n;i++)    cin>>a[i];
    for(long i=0;i<n;i++)    cin>>b[i];

   checkmirror(a,b,n);
    return 0;
}
