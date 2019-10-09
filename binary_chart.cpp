#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"Decimal   binary"<<endl;
   for(int n=1;n<=N;n++)
   {
    int j=n;
    int b=0,t=1;

    while(n>0)
    {
        //cout<<n%2;

        b+=(n%2)*t;
        n/=2;
        t*=10;
    }
    n=j;

    cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<n<<"    =    "<<b;
    cout<<endl;


   }


}


