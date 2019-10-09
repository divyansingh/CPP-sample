#include <iostream>
using namespace std;
int main()
{
    int i,j,n,hn,s;
    cin>>n;
    hn=(n+1)/2;

    for(i=1;i<=n;i++)
    {
        cout<<"* ";
        if(i<=hn) s=hn-i+1; else s=i-hn+1;
        for(j=1;j<=s;j++)
        {
            if(j==s)   cout<<"* ";
             else cout<<"  ";
        }
      cout<<endl;
    }
    return 0;
}
