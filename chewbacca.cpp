#include<iostream>
using namespace std;
long digits(int n)
{
    long d=10,dig=1;

         while(n>0)
        {
            n/=d;
            d*=10;
            dig++;
        }
    return dig;
}
int main()
{
    long n,d=10,t,temp=0,k=1,p=1;
    cin>>n;
    long dig=digits(n);

    while(n>0)
    {
        t=n%d;
        if(!(t==9&&p==dig)) {t=(t>9-t)?9-t:t;}

        n/=d;
        temp+=t*k;
        k*=10;
        p++;


    }
    cout<<temp;
    return 0;

}
