#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int hn=(n+1)/2;
    for(i=1;i<=hn;i++)
    {
        for(j=1;j<=hn-i+1;j++)
        {
            cout<<"* ";

        }
        for(j=1;j<=2*i-3;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=hn-i+1;j++)
        {
            if(!(j==1&&i==1))
            cout<<"* ";

        }
        cout<<endl;


    }
     for(i=hn-1;i>=1;i--)
    {
        for(j=1;j<=hn-i+1;j++)
        {
            cout<<"* ";

        }
        for(j=1;j<=2*i-3;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=hn-i+1;j++)
        {
            if(!(j==1&&i==1))
            cout<<"* ";

        }
        cout<<endl;


    }
}
