#include<iostream>
using namespace std;
int main()
{
    int r,c,r1,c1,sum=0,sumr,sumc;
    cin>>r>>c;
    int a[100][100];
    for(int i=0;i<r;i++)
    {
        for(int j=0 ;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0 ;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {

        for(int j=0 ;j<c;j++)
        {
            if(sum<a[i][j])
            {
                sum=a[i][j];
                sumr=sum;
                r1=i;
            }
            if(sum>a[j][i])
            {
                sum=a[j][i];
                sumc=sum;
                c1=j;
            }

        }

    }
    if(sumr>sumc)   cout<<"row "<<r1<<" has max sum = "<<sumr;
    else    cout<<"column "<<c1<<" has max sum = "<<sumc;
    return 0;
}
