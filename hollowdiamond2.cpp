#include<iostream>
using namespace std;
int main()
{
    int i,j,n,hn,s;
    cin>>n;
    hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        if(i<=hn)   s=hn-i+1;  else s=i-hn+1;
        for(j=1;j<=s;j++)
        {
           if(j==s)    cout<<"* ";    else  cout<<"  ";
        }
        if(i<=hn)   s=2*i-2;   else s=2*(2*hn-i)-2;
        for(j=1;j<=s;j++)
        {
            if(j==s)    cout<<"* ";    else  cout<<"  ";
        }
        cout<<endl;
    }
    return 0;

}
