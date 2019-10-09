#include <iostream>
using namespace std;
int main()
{
    int i,m;
    for(i=1,m=4;i<=9;i=i+2,m--)
    {
        for(int k=1;k<=m;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }

        cout<<endl;
    }
}
