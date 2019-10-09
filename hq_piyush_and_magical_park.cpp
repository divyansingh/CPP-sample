#include<iostream>
using namespace std;
int main()
{
    int n,m,k,s,i,j;
    cin>>n>>m>>k>>s;
    char a[n][m];
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {cin>>a[i][j];}
        }
        for(i=0;i<n;i++)
        {
            for( j=0;j<m&&s>0;j++,s--)
            {
                if (a[i][j]=='*')   s+=5;
                if (a[i][j]=='.')   s-=2;
                if (a[i][j]=='#')   j=m;
                if  (s<=k)   break;

            }
            s++;

            if(j<m) break;
        }
        s--;
        if(i==n)    cout<<"Yes"<<endl<<s;
        else    cout<<"No";





    return 0;
}
