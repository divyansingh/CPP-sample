#include<iostream>
using namespace std;
int main()
{
    int r,c;
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
    cout<<"enter the no to be searched ";
    int k;
    cin>>k;
    for(int i=0;i<r;i++)
    {
        for(int j=0 ;j<c;j++)
        {
            if(a[i][j]==k)
            cout<<"no found at index "<<i<<" , "<<j;
        }
        cout<<endl;
    }


    return 0;
}
