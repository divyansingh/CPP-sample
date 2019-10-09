#include <iostream>
using namespace std;
int main()
{
    int i=1,N,k=2;
    cin>>N;
    while(i<=N)
    {
        int j=1;
        while(j<=i)
        {
            if(k%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
