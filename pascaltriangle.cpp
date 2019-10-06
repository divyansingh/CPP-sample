#include <iostream>
using namespace std;
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
long ncr (int n,int r)
{
    long val=factorial(n)/(factorial(n-r)*factorial(r));

    return val;
}
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(int j=n-i;j>=1;j--)  cout<<" ";
        for(j=0;j<=i;j++)
        {
            cout<< ncr(i,j)<<" ";

        }
        cout<<endl;
    }
    return 0;
}
