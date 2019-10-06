#include<iostream>
using namespace std;
int slength(char a[])
{
    int i;
    for(i =0;a[i]!='\0';i++);
    return i;
}
int scopy(char from[],char to[])
{
    int i;
    for( i=0;from[i]!='\0';i++)
    {
        to[i]=from[i];
    }
    to[i]='\0';
}
int main()
{
    int n,i,maxii=0,t;  cin>>n;
    char a[100];char maxi[100];
    for(i=0;i<n;i++)
    {
        cin.getline(a,100);
        t=slength(a);
        if(t>maxii)
            {
                maxii=t;
                scopy(a,maxi);
            }

    }
    cout<<maxii<<" "<<maxi;
    return 0;

}
