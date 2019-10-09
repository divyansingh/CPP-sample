#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)    cout<<"* ";
            else    cout<<"  ";
        }
        for(j=1;j<=2*(n-i);j++)
        {
            if(j==2*(n-i))  cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
