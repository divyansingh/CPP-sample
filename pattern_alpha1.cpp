#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1,ch='A';j<=i;j++,ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;


}
