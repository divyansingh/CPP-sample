#include <iostream>
using namespace std;
int main()
{
    int N,i=1,a=-1,b=1,c;
    cin>>N;
    while(i<=N)
    {
        int j=1;
        while(j<=i)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


}
