#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isprime(long n){
    long i;
    for( i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {

          break;
      }
  }

if(i!=(n/2)+1){

    return false;
}
    else

    return true;

}
bool jj(long n){
    long sum =0;
    for(long i=1;i<=n;i++){
        if(n%i==0)   sum++;
    }

    if(isprime(sum))
            return 1;
    else return 0;

}
using namespace std;


int main()
{
    int n;  cin>>n;
    long a[n]={0};

    long n1,n2,jj1=0;
    for(int i=0;i<n;i++)
    {
        cin>>n1>>n2;
        for(long j=n1;j<=n2;j++)
        {

            jj1+=jj(j);
        }
        a[i]=jj1;
        jj1=0;
    }

     for(int i=0;i<n;i++)      cout<<a[i]<<endl;;
    return 0;
}
