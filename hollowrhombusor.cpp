#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            cout<<"  ";
        }
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==n||j==1)  cout<<"* ";
                else
                    cout<<"  ";
        }
        cout<<endl;
    }
}
