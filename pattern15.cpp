#include<iostream>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((j==1)||(i==j))
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }

}
