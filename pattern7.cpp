#include<iostream>
using namespace std;
int main()
{
    int N,i,p;
    cin>>N;
    for(i=1,p=N+1;i<=N;i++,p=p-2)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
          for(int k=1;k<=p;k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
