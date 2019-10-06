#include <iostream>
using namespace std;
bool arraymirror(int a[],int b[],int n)
{
    int i;
    int inv[n];
    for(i=0;i<n;i++)
    {
        inv[a[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]!=inv[i])
        break;
    }
    if(i==n)    return true;
    else  return false;

}
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)    cin>>a[i];
    for(i=0;i<n;i++)    cin>>b[i];
    if(arraymirror(a,b,n)) cout<<"TRUE";
    else    cout<<"FALSE";
    return 0;

}
