#include<iostream>
using namespace std;
int main()
{
    int i,j,hn,n;
    cin>>n;
    hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n||((i==j)&&(j<=hn))||(j>hn)&&(n-j+1==i))  cout<<"% ";
            else    cout<<"  ";
        }
        cout<<endl;
    }

   return 0;
}
