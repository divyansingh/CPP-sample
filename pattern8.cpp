#include <iostream>
using namespace std;
int main()
{
    int N,k,l,m;
    cin>>N;
    k=1+(((N-1)/2)-1)*2;
    l=(N-1)/2;
    m=l;
    for(int i=1;i<=N;i=i+2,l--)
    {
        for(int z=1;(z<=l)&&(l>=1);z++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int t=k,u=1;t>=1;t=t-2,u++)
    {
        for(int y=1;(y<=u)&&(u<=m);y++)
        {
            cout<<" "<<" ";
        }
        for(int r=1;r<=t;r++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
