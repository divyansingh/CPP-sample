#include<iostream>
using namespace std;
void sumpairs(int a[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)
                cout<<a[i]<<" and "<<a[j]<<endl;

        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];

    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                 swap(a[j+1],a[j]);

            }

        }

    }
    int m;
    cin>>m;
    sumpairs(a,n,m);
    return 0;
}
