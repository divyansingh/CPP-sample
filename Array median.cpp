#include<iostream>
using namespace std;

int med(int a[],int n,int b[],int m)
{

}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<m;i++)    cin>>b[i];
    int me =med(a,n,b,m);
    cout<<me;
    return 0;


}
