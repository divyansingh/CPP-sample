#include<iostream>
#include<math.h>
long digits(long n)
{
    long dig=1;

         while(n>0)
        {
            n/=10;
            dig++;
        }
    return --dig;
}
int power(int a,int n){
    if(n==0)    return 1;
    int hp=power(a,n/2);

    if (n%2==0) return hp*hp; else return a*hp*hp;
}
using namespace std;
int main()
{
    long n,i,dig,r;
    long inv=0;
    cin>>n;
    dig=digits(n);


    for(i=1;i<=dig;i++)
    {

       r=(n%10)-1;



       n/=10;
       inv+=(power(10,r)*i);

    }
    cout<<inv;
    return 0;
}

