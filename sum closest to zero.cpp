#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        int n,i,j,i1,j1;

        unsigned int sum;
        cin>>n;
        int a[n];
        for( i=0;i<n;i++)    cin>>a[i];
        sum=a[0]+a[1];
        for( i=0;i<n;i++)
        {
            for( j=i+1;j<n;j++)
            {
                if((sum>a[i]+a[j])&&abs(a[i]+a[j])>0)
                {
                    sum=a[i]+a[j];
                    i1=i;
                    j1=j;
                }
            }
        }
        cout<<a[i1]<<" "<<a[j1]<<endl;
        cout<<sum;
        return 0;
}
