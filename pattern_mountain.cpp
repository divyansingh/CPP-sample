#include<iostream>
using namespace std;
int main()
{
    int N,i,j,k;
    cin>>N;
    k=((N-1)*2)-1;
    for(i=1;i<=N;i++,k=k-2)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=k;j++)
        {
            cout<<" "<<" ";
        }
        for(j=i;j>=1;j--)
        {
            if(j!=N)
           {
             cout<<j<<" ";
           }
        }
        cout<<endl;

    }
    return 0;
}
