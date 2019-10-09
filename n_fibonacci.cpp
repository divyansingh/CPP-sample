#include<iostream>
using namespace std;
int main()
{

    int N;
    cin>>N;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    int c=a+b;
    while(c<=N)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
}
