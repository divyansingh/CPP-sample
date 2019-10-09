#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1,ch='A';j<=2*i;j++)
        {
            if(j<=i)    ch++;   else    ch--;
            cout<<ch<<" ";

        }
        cout<<endl;

    }
    return 0;
}

