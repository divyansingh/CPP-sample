#include <iostream>
using namespace std;
int main()
{
    int N,j,k;
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


        for(int p=j-2;p>=i;p--)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;

}

