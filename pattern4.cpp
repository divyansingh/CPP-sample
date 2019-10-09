#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
            {
                if(j<=i)
                {
                    cout<<j<<" ";
                }
                else
                {
                    cout<<"*"<<" ";
                }

            }
            cout<<endl;



    }
    return 0;

}
