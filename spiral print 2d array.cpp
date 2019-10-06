
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
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"spiral print is "<<endl;
    int rs=0,cs=0,re=r-1,ce=c-1;
    while(cs<=ce&&rs<=re)
    {
        for(int i=cs;i<=ce;i++) cout<<a[rs][i]<<" ";
        rs++;
        for(int i=rs;i<=re;i++)     cout<<a[i][ce]<<" ";
        ce--;
        if(rs<=re)
        {
            for(int i=ce;i>=cs;i--)     cout<<a[re][i]<<" ";
            re--;
        }

        if(cs<=ce)
        {
             for(int i=re;i>=rs;i--)     cout<<a[i][cs]<<" ";
            cs++;
        }


    }





    return 0;

}
