#include <iostream>
using namespace std;
int main()
{
    int N,j,k,p;
    cin>>N;
    for(int i=1,l=N-1;i<=N;i++,l--)
    {
        for(int m=1;m<=l;m++)
        {
            cout<<" "<<" ";
        }
        for(j=i,k=1;k<=i;j++,k++)
        {
            cout<<j<<" ";

        }


        for(p=j-2;p>=i;p--)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }
    int q,w,e,t,y,o,u;



    for(q=N-1,t=1;q>=1;q--,t++)
    {
        for(int r=1;r<=t;r++)
        {
            cout<<" "<<" ";
        }
        for(w=1,e=q;w<=q;w++,e++)
        {
            cout<<e<<" ";
        }
        for(u=1,o=e-2;u<=q-1;u++,o--)
        {
            cout<<o<<" ";

        }
        o=y;

        cout<<endl;
    }
    return 0;
}
