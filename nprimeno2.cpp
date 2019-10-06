#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    bool a[n]={0};
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i*j]=1;
        }
    }
       for(i=2;i<=n;i++)    if(a[i]==0)    cout<<i<<" ";
       return 0;
}
