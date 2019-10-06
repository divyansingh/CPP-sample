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
    //cout<<"Vertical spiral"<<endl;
     for(int i=0;i<c;i++)
     {


        if(i%2==0)
        {
            for(int j=0 ;j<r;j++)
            {
                cout<<a[j][i]<<" ";
            }

        }
    else

        for(int j=c-1 ;j>=0;j--)
        {
            cout<<a[j][i]<<" ";
        }

     }



    return 0;

}
