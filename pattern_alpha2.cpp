#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1,ch='A';j<=i;ch++,j++)
        {
            cout<<ch<<" ";
        }
        for(j=1,ch-=1;j<=i;ch--,j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
